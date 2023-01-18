#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(-1.310117,-1.843841,7.029799,13.5215);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_all->SetBottomMargin(0.12);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(11.98497);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",30,0,6);
   st_stack_184->SetMinimum(0);
   st_stack_184->SetMaximum(11.98497);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_184->GetXaxis()->SetRange(1,30);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Events/0.2");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,1.115158);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,4.397182);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,5.786916);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,5.148673);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,4.358344);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,3.153388);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,2.338929);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,1.698028);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,1.368196);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,1.109793);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.8695174);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.7518284);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.6967299);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.6538383);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.5426941);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.4575782);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.2855144);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.181317);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.1082264);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.07676396);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.04889667);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.02254819);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.01520271);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.007821002);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.008232439);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.004468371);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.002323422);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(29,0.003764068);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(30,0.003027725);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(31,0.001440646);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,0.0455604);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,0.0911302);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,0.1047105);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,0.0983659);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,0.09067774);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,0.0771197);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,0.06622569);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,0.056128);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,0.05040757);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,0.04561481);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,0.04032511);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,0.03755827);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,0.03616876);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,0.03514488);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,0.03244242);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,0.02919612);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,0.02313806);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,0.01826548);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,0.01439034);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,0.01181601);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,0.00963393);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,0.006363674);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,0.005508027);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,0.003979223);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,0.003760784);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,0.002582584);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(27,0.001440646);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,0.002323422);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(29,0.002733816);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(30,0.002143427);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(31,0.001440646);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(19568);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.5899409);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,1.855539);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,2.203062);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,1.754786);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,1.213967);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.8038795);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.5435153);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.3812931);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.2970158);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.2413373);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.2270971);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.1990092);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.1687166);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.1536089);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.140966);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.126665);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.08025344);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.04805253);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.03050683);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.02039278);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.01700267);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.008692631);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.006303699);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.002430811);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.002111479);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.001973321);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.001228376);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0003600719);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,0.01243515);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,0.02218831);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,0.02420184);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,0.02157156);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,0.01801392);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,0.01456308);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,0.01198983);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,0.009996858);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,0.008748941);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,0.00794815);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,0.00766331);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,0.007193852);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,0.006615896);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,0.006314527);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,0.006065435);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,0.005733978);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,0.004577567);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,0.003575547);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,0.002819227);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,0.002387651);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,0.002101877);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,0.001501873);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,0.001309615);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,0.0007599735);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0007273671);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,0.0007305327);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0005780096);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,0.000180036);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0002546093);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(45428);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
