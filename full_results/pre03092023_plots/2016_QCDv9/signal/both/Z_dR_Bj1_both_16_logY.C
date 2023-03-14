#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.310117,-0.1415261,7.029799,1.037858);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetFillStyle(4000);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLogy();
   Z_dR_Bj1_both_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_16->SetBottomMargin(0.12);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_181 = new TH1F("st_stack_181","",30,0,6);
   st_stack_181->SetMinimum(-2.482178e+09);
   st_stack_181->SetMaximum(-0.8861789);
   st_stack_181->SetDirectory(0);
   st_stack_181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_181->SetLineColor(ci);
   st_stack_181->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_181->GetXaxis()->SetRange(1,30);
   st_stack_181->GetXaxis()->SetLabelFont(42);
   st_stack_181->GetXaxis()->SetTitleOffset(1);
   st_stack_181->GetXaxis()->SetTitleFont(42);
   st_stack_181->GetYaxis()->SetTitle("Event/0.2");
   st_stack_181->GetYaxis()->SetLabelFont(42);
   st_stack_181->GetYaxis()->SetTitleSize(0.037);
   st_stack_181->GetYaxis()->SetTitleFont(42);
   st_stack_181->GetZaxis()->SetLabelFont(42);
   st_stack_181->GetZaxis()->SetTitleOffset(1);
   st_stack_181->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_181);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.1291878);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,0.547602);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,0.61316);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,0.4241987);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,0.2390938);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.131116);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.0964088);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.09833698);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.0482044);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.05784528);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.05206075);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.0482044);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.03663535);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.03663535);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.03085082);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.02313811);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.01542541);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.01349723);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.003856352);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.001928176);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.001928176);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.003856352);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.001928176);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.0157828);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.0324942);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.0343843);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.02859947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.02147126);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.01590015);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.01363426);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.01376993);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.00964088);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.01056106);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.0100191);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.00964088);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.008404725);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.008404725);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.007712704);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.006679398);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.005453705);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.005101474);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.002726853);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.001928176);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.001928176);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.002726853);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.001928176);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.06095299);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.261443);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.2629542);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.1692579);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.08387333);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.05188561);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.03425457);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.02997275);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.02317221);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.02014975);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.01838665);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.02266847);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.0161198);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.01511231);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.01334921);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.01158611);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.006548669);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.004281822);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.001763103);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.001763103);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.0005037437);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.003918207);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.00811481);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.008138229);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.006529265);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.00459623);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.003615041);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.002937306);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.002747598);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.00241587);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.002252811);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.002151994);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.002389466);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.002014975);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.001950991);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.001833655);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.001708278);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.0012843);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001038494);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.0006663903);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.0006663903);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0003562006);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.0002518719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
