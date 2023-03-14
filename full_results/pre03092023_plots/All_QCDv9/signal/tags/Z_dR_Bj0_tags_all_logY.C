#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(-1.310117,-2.935569,7.029799,0.910585);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetLogy();
   Z_dR_Bj0_tags_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_all->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(12.77583);
   st_stack_52->SetMaximum(3.357141);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetTitleOffset(1);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Event/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetTitleSize(0.037);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetTitleOffset(1);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.6610766);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,2.54083);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,2.467416);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,1.723578);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,0.972761);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.6127405);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.4671534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.3211075);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.3118892);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.2292791);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.1973236);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.1917906);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.1642395);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.1696246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.1667297);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.1375739);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.08954299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.05839238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.04423095);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.02712277);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.007366298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.005137799);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.00271891);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.001114249);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001114249);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(29,0.001928478);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(31,0.00160466);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,0.03173351);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,0.06190856);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,0.06110893);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,0.05072413);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,0.03843114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,0.03078379);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,0.02640828);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,0.02227425);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,0.02180943);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,0.0187239);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,0.01711677);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,0.01709683);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,0.01573109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,0.01621419);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,0.01611396);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,0.01456881);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,0.01179322);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,0.009204488);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,0.00835024);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,0.005910656);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,0.003369273);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,0.00297807);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,0.001953583);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,0.001114249);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001114249);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(29,0.001928478);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(31,0.00160466);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.2453776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,1.135846);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,1.2019);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.7394338);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.3692168);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.1978313);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.1524716);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.1286419);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.1022721);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.09446177);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.08391037);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.06931952);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.06865227);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.0619732);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.05613272);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.05269792);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.03279843);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.01718333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.01150209);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.007015033);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.003991147);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.002625827);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.001641992);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.001406179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.0006338722);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.0004225814);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.000398296);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0002112907);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.0004225814);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,0.006948452);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,0.01503696);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,0.01547192);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,0.01210209);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,0.008580966);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,0.006272565);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,0.005535094);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,0.005046632);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,0.004508414);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,0.004329295);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,0.004091091);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,0.003710836);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,0.003704834);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,0.003473309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,0.003384916);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,0.003217203);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,0.002550423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,0.00184997);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,0.001492105);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,0.001184603);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,0.0008941163);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,0.0006924842);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,0.0005558171);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,0.0005470897);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0003659663);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,0.0002988102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0002913551);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002112907);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,0.0002988102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}
