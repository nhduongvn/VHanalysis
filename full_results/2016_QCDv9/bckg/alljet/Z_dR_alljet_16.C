#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_16()
{
//=========Macro generated from canvas: Z_dR_alljet_16/Z_dR_alljet_16
//=========  (Tue Feb 14 16:10:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_16 = new TCanvas("Z_dR_alljet_16", "Z_dR_alljet_16",0,0,600,600);
   Z_dR_alljet_16->SetHighLightColor(2);
   Z_dR_alljet_16->Range(-1.310117,-1.107813e+10,7.029799,8.123965e+10);
   Z_dR_alljet_16->SetFillColor(0);
   Z_dR_alljet_16->SetFillStyle(4000);
   Z_dR_alljet_16->SetBorderMode(0);
   Z_dR_alljet_16->SetBorderSize(2);
   Z_dR_alljet_16->SetLeftMargin(0.15709);
   Z_dR_alljet_16->SetRightMargin(0.1234783);
   Z_dR_alljet_16->SetBottomMargin(0.12);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.200787e+10);
   
   TH1F *st_stack_209 = new TH1F("st_stack_209","",30,0,6);
   st_stack_209->SetMinimum(0);
   st_stack_209->SetMaximum(7.200787e+10);
   st_stack_209->SetDirectory(0);
   st_stack_209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_209->SetLineColor(ci);
   st_stack_209->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_209->GetXaxis()->SetRange(1,30);
   st_stack_209->GetXaxis()->SetLabelFont(42);
   st_stack_209->GetXaxis()->SetTitleOffset(1);
   st_stack_209->GetXaxis()->SetTitleFont(42);
   st_stack_209->GetYaxis()->SetTitle("Events/0.2");
   st_stack_209->GetYaxis()->SetLabelFont(42);
   st_stack_209->GetYaxis()->SetTitleSize(0.037);
   st_stack_209->GetYaxis()->SetTitleFont(42);
   st_stack_209->GetZaxis()->SetLabelFont(42);
   st_stack_209->GetZaxis()->SetTitleOffset(1);
   st_stack_209->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_209);
   
   
   TH1D *VbbHcc_alljet_Z_dR_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,2.598232e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,1.02431e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,2.23202e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,1.860264e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,1.9803e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,2.173944e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,2.380498e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,2.614556e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,2.863377e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,3.151238e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,3.456871e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,3.798643e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,4.159108e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,4.570674e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,4.80029e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,3.764743e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,3.21484e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,2.84831e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,2.564921e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,2.330506e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,2.127745e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,1.944061e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,1.770613e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,1.616544e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,1.482089e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,1.353814e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,1.234208e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,1.134256e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,1.031682e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,6.053569e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,755323.6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,1.461186e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,2.185565e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,1.99886e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,2.065993e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,2.168133e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,2.272183e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,2.383405e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,2.495463e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,2.618944e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,2.743202e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,2.876506e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,3.010413e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,3.157888e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,3.238245e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,2.8714e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,2.656989e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,2.504163e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,2.379332e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,2.27083e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,2.172446e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,2.07946e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,1.986689e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,1.900285e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,1.821748e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,1.743425e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,1.666305e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,1.599037e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,1.526661e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,3.714129e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(1.882126e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,577.8749);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,422808.5);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,833393.1);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,1014532);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,1253699);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,1466889);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,1641779);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,1782697);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,1898721);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,2002892);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,2105373);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,2206997);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,2308266);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,2404520);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,2348068);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,1438298);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,994664.8);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,737311.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,564473);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,441328);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,349195.9);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,278695);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,223802.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,179869.4);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,144812.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,116155.5);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,93018.41);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,73986.69);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,58437.95);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,190489);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,6.044074);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,165.2442);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,232.6684);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,257.6202);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,286.7169);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,310.1493);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,327.958);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,341.4909);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,352.1983);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,361.6502);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,370.8777);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,379.9374);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,388.8783);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,397.2492);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,392.6453);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,305.966);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,253.3782);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,217.2846);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,189.4096);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,166.8885);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,147.9303);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,131.7441);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,117.6711);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,105.1866);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,94.12043);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,84.09831);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,75.06603);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,66.75093);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,59.18406);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,105.7809);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(4.864545e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_alljet_16->Modified();
   Z_dR_alljet_16->cd();
   Z_dR_alljet_16->SetSelected(Z_dR_alljet_16);
}
