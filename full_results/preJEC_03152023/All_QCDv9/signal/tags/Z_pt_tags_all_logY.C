#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_all_logY()
{
//=========Macro generated from canvas: Z_pt_tags_all/Z_pt_tags_all
//=========  (Thu Mar  9 13:08:24 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_all = new TCanvas("Z_pt_tags_all", "Z_pt_tags_all",0,0,600,600);
   Z_pt_tags_all->SetHighLightColor(2);
   Z_pt_tags_all->Range(37.97653,-0.2806841,1705.96,0.9195366);
   Z_pt_tags_all->SetFillColor(0);
   Z_pt_tags_all->SetFillStyle(4000);
   Z_pt_tags_all->SetBorderMode(0);
   Z_pt_tags_all->SetBorderSize(2);
   Z_pt_tags_all->SetLogy();
   Z_pt_tags_all->SetLeftMargin(0.15709);
   Z_pt_tags_all->SetRightMargin(0.1234783);
   Z_pt_tags_all->SetBottomMargin(0.12);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(5.490384);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(0.7300329);
   st_stack_12->SetMaximum(6.302524);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_12->GetXaxis()->SetRange(7,30);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_1 = new TH1D("VbbHcc_tags_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(1,1.554067);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(2,3.458837);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(3,4.557018);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(4,3.259479);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(5,2.059041);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(6,1.258262);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(7,0.7343133);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(8,0.4807711);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(9,0.1990174);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(10,0.09700781);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(11,0.04788957);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(12,0.02455683);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(13,0.01433304);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(14,0.01555051);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(15,0.006328098);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(16,0.003340468);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(1,0.06310363);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(2,0.09370231);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(3,0.1070618);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(4,0.1024881);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(5,0.07638415);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(6,0.05718866);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(7,0.04256254);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(8,0.03993686);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(9,0.02203062);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(10,0.01566251);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(11,0.01157063);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(12,0.007862649);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(13,0.005687182);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(14,0.00608771);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(15,0.003670836);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(16,0.003340468);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(17,0.007143407);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(18,0.001938755);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(26,0.002001313);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(27,0.001842579);
   VbbHcc_tags_Z_pt_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_2 = new TH1D("VbbHcc_tags_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(1,0.5046365);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(2,1.1359);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(3,2.00737);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(4,1.6869);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(5,1.070034);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(6,0.611115);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(7,0.2904379);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(8,0.1717914);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(9,0.0626042);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(10,0.03053594);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(11,0.008945174);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(12,0.006194936);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(13,0.002026667);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(14,0.001983087);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(15,0.0009351897);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(16,0.001388519);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(19,0.0009761577);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(21,0.0006273928);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(1,0.01391032);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(2,0.01917594);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(3,0.02598749);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(4,0.02429386);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(5,0.01858581);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(6,0.01441638);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(7,0.009629561);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(8,0.007544585);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(9,0.004423063);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(10,0.003135577);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(11,0.001675436);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(12,0.00139278);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(13,0.0007575501);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(14,0.0007803521);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(15,0.0005645983);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(16,0.0006978046);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(19,0.0005662284);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(21,0.000455775);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_tags_Z_pt_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_all->Modified();
   Z_pt_tags_all->cd();
   Z_pt_tags_all->SetSelected(Z_pt_tags_all);
}
