#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_all()
{
//=========Macro generated from canvas: Z_dR_alljet_all/Z_dR_alljet_all
//=========  (Mon Dec 19 11:11:48 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_all = new TCanvas("Z_dR_alljet_all", "Z_dR_alljet_all",0,0,600,600);
   Z_dR_alljet_all->SetHighLightColor(2);
   Z_dR_alljet_all->Range(-1.310117,-4.708871e+10,7.029799,3.453172e+11);
   Z_dR_alljet_all->SetFillColor(0);
   Z_dR_alljet_all->SetFillStyle(4000);
   Z_dR_alljet_all->SetBorderMode(0);
   Z_dR_alljet_all->SetBorderSize(2);
   Z_dR_alljet_all->SetLeftMargin(0.15709);
   Z_dR_alljet_all->SetRightMargin(0.1234783);
   Z_dR_alljet_all->SetBottomMargin(0.12);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.060766e+11);
   
   TH1F *st_stack_188 = new TH1F("st_stack_188","",30,0,6);
   st_stack_188->SetMinimum(0);
   st_stack_188->SetMaximum(3.060766e+11);
   st_stack_188->SetDirectory(0);
   st_stack_188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_188->SetLineColor(ci);
   st_stack_188->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_188->GetXaxis()->SetRange(1,30);
   st_stack_188->GetXaxis()->SetLabelFont(42);
   st_stack_188->GetXaxis()->SetTitleOffset(1);
   st_stack_188->GetXaxis()->SetTitleFont(42);
   st_stack_188->GetYaxis()->SetTitle("Events/0.2");
   st_stack_188->GetYaxis()->SetLabelFont(42);
   st_stack_188->GetYaxis()->SetTitleSize(0.037);
   st_stack_188->GetYaxis()->SetTitleFont(42);
   st_stack_188->GetZaxis()->SetLabelFont(42);
   st_stack_188->GetZaxis()->SetTitleOffset(1);
   st_stack_188->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_188);
   
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(2,7.317113e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(3,3.895861e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(4,9.45173e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(5,7.906336e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(6,8.479202e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(7,9.366462e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(8,1.024175e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(9,1.124389e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(10,1.233076e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(11,1.352707e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(12,1.483363e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(13,1.622555e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(14,1.776072e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(15,1.94407e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(16,2.040417e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(17,1.601928e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(18,1.37244e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(19,1.223913e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(20,1.108676e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(21,1.016442e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(22,9.366572e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(23,8.602875e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(24,7.890607e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(25,7.246559e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(26,6.692955e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(27,6.238565e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(28,5.909645e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(29,5.498238e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(30,5.021801e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(31,3.130304e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(2,1248960);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(3,2.810233e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(4,4.351825e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(5,4.002961e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(6,4.146797e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(7,4.369704e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(8,4.554454e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(9,4.763334e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(10,5.006319e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(11,5.241914e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(12,5.491291e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(13,5.742846e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(14,6.018703e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(15,6.291143e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(16,6.463858e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(17,5.731758e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(18,5.303896e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(19,5.007425e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(20,4.758351e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(21,4.562659e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(22,4.38029e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(23,4.191607e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(24,4.018868e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(25,3.852193e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(26,3.70578e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(27,3.58022e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(28,3.48499e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(29,3.359591e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(30,3.206164e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(31,8.018391e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetEntries(7.354664e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(2,1977.894);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(3,1662152);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(4,3335415);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(5,4050776);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(6,5005666);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(7,5856960);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(8,6554150);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(9,7117646);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(10,7580893);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(11,8001997);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(12,8412941);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(13,8827037);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(14,9237746);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(15,9629057);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(16,9409748);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(17,5794495);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(18,4026982);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(19,3002822);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(20,2313207);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(21,1819222);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(22,1449403);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(23,1164577);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(24,939662.5);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(25,760366.8);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(26,615628.1);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(27,498188.5);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(28,402051.2);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(29,321764.8);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(30,255791);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(31,858463.1);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(2,12.48544);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(3,359.3131);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(4,508.277);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(5,562.9411);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(6,627.1466);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(7,678.2094);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(8,716.6564);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(9,746.5492);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(10,769.4944);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(11,790.9175);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(12,810.2917);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(13,830.4561);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(14,850.5961);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(15,869.6238);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(16,859.6914);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(17,670.6514);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(18,555.5765);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(19,476.8802);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(20,416.6629);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(21,367.2654);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(22,325.8961);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(23,290.7998);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(24,260.0742);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(25,233.0194);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(26,208.052);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(27,186.8807);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(28,166.6715);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(29,148.8394);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(30,132.1537);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(31,238.1231);
   VbbHcc_alljet_Z_dR_all_stack_2->SetEntries(1.85096e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Z_dR_alljet_all->Modified();
   Z_dR_alljet_all->cd();
   Z_dR_alljet_all->SetSelected(Z_dR_alljet_all);
}
