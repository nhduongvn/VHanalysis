#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Tue Feb 14 16:02:03 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-2.015262,7.029799,10.86601);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLogy();
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.843556);
   st->SetMaximum(1.363972e+09);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0.3392272);
   st_stack_148->SetMaximum(3.783426e+09);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(2,5845.322);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,1.10688e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,1.337474e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,9985638);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,8328855);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,7888103);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,7277748);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,7103278);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,7069674);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,7065375);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,7398263);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,8009148);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,9137371);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,1.031647e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,1.05148e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,6344317);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,3911191);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,3022147);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,2036111);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,1311310);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,1101230);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,640600.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,328976.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,174832.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,112058.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,54427.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,12188.87);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,1836.398);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(2,1197.79);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,219589.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,248673.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,230669.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,202228.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,216803.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,205924.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,217233.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,208879.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,223428.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,210456.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,222622);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,252454.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,270172.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,266350.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,204410.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,156449.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,149854.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,123134.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,87977.36);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,102115.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,65848.52);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,34009.27);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,26379.15);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,22589.41);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,24872.36);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,4293.404);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,1825.684);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(1509118);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,94.3642);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,135725.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,264974.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,316296.3);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,385230.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,449978.3);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,511426);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,572379.7);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,634509.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,701050.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,772341.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,847490.3);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,921518);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,988532.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,967811.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,509164.2);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,289791.7);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,171721.9);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,101119.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,58200.35);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,32587.56);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,17499.34);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,8877.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,4121.817);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,1712.254);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,579.7841);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,136.3966);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,7.157442);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,2.730998);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,106.0643);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,148.1418);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,161.7293);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,178.9065);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,193.0302);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,206.1404);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,217.8487);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,229.273);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,241.726);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,253.0872);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,265.508);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,277.0395);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,287.1946);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,284.2695);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,206.855);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,156.0062);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,120.0107);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,92.14212);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,70.0683);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,52.55063);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,38.51027);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,26.85304);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,18.30304);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,12.31482);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,6.862596);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,4.142538);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,0.7254557);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(1.352603e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
