#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Thu Feb 16 10:37:40 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-0.8848162,7.029799,9.386608);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLogy();
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9.549466e+07);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(2.227177);
   st_stack_147->SetMaximum(2.288048e+08);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,727.5506);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,934566);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,910796.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,652177.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,639191.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,525550.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,464041.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,440824.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,588765.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,521288.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,505416.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,587992.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,631074.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,707638.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,725917.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,400626.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,322445.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,213116.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,151229.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,96264.58);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,65535.93);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,29715.25);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,25064.81);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,8971.835);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,6888.562);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1921.533);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,41.17258);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1621.663);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,401.9164);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,41284.32);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,24293.39);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,20710.69);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,38116.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,19253.86);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,18672.52);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,18355.28);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,55335.13);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,45078.85);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,37877.95);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,50245.52);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,49950.65);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,43670.38);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,38829.17);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,17868.04);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,43549.36);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,30504.98);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,33132.34);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,9673.148);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,8508.649);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,3530.623);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,5690.165);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,1975.507);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,3277.156);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,777.5087);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,19.50415);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,1621.663);
   VbbHcc_both_Z_dR_stack_1->SetEntries(266336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,16.04893);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,20380.65);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,38887.48);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,47364.45);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,56972.52);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,65494.42);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,73556.33);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,82968.75);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,93501.48);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,107042);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,122586.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,140382.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,158509.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,175248.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,174859.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,89851.92);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,49523.56);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,28578.51);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,16317.17);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,9156.963);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,4974.599);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,2582.897);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,1302.596);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,602.1472);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,241.7474);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,83.17038);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,21.91102);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,0.6451988);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.159286);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,43.25133);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,59.59446);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,65.88616);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,73.03471);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,77.3515);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,82.2955);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,87.29902);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,92.01009);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,98.99619);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,105.9498);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,113.7392);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,121.2728);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,127.4141);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,127.1598);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,91.66131);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,68.1982);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,52.08813);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,38.95961);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,29.95963);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,21.3231);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,15.30237);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,10.65226);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,7.34351);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,5.711819);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,2.789325);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,2.843995);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.2317621);
   VbbHcc_both_Z_dR_stack_2->SetEntries(2.086813e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
