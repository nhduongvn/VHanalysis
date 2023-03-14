#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-78477.09,7.029799,575498.6);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(510101.1);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0);
   st_stack_114->SetMaximum(510101.1);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,75643.08);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,330651.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,245889.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,151315.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,80041.63);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,66107.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,50650.03);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,39493.07);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,22093.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,11227.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,6047.467);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,9391.111);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,8520.268);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,4126.075);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,2746.912);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,604.4823);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,307.3305);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,113.2319);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,1350.778);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,272.7542);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,64.9092);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,13.37889);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,30.53182);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,0.4389775);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,1545.495);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3931.52);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,19882.21);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,24808.18);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,9605.14);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,6372.67);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,16560.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,16465.59);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,16274.36);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3949.722);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,2798.791);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,1973.797);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2739.951);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,2951.12);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,1904.24);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1404.002);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,357.5499);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,253.1638);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,45.93387);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1285.914);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,252.0482);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,37.47534);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,9.781569);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,23.39364);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,0.4389775);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1309.81);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(24778);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,1333.828);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,9415.862);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,13936.51);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,12491.62);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,8864.608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,5599.565);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,3462.59);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,2209.742);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,1465.509);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1005.67);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,682.6222);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,466.2688);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,327.9227);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,232.8881);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,151.5599);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,111.1539);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,76.5078);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,55.67907);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,34.01157);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,27.00229);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,15.72057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,12.81588);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,8.228284);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,5.643773);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,3.490442);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,2.575274);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.628406);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.077468);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.6358819);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.4856385);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,0.9500297);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,9.207965);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,24.47063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,29.74426);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,28.1515);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,23.7059);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,18.81686);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,14.77113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,11.78675);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,9.591841);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,7.946526);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,6.531222);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.392971);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,4.51829);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,3.809099);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.068261);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,2.639519);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.181588);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.864563);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.447787);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.294876);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.998336);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.8987684);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.7186807);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.590913);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4665778);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.4009026);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3182051);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.258979);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.1946994);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1743086);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2412206);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(1015007);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
