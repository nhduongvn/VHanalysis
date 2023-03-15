#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_16()
{
//=========Macro generated from canvas: Z_dR_alljet_16/Z_dR_alljet_16
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_16 = new TCanvas("Z_dR_alljet_16", "Z_dR_alljet_16",0,0,600,600);
   Z_dR_alljet_16->SetHighLightColor(2);
   Z_dR_alljet_16->Range(-1.310117,-1.10756e+10,7.029799,8.122106e+10);
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
   st->SetMaximum(7.199139e+10);
   
   TH1F *st_stack_209 = new TH1F("st_stack_209","",30,0,6);
   st_stack_209->SetMinimum(0);
   st_stack_209->SetMaximum(7.199139e+10);
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
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,2.597253e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,1.024729e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,2.232509e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,1.859384e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,1.97979e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,2.173193e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,2.379858e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,2.613534e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,2.862067e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,3.150284e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,3.455695e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,3.797816e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,4.158631e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,4.569423e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,4.799191e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,3.763821e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,3.214639e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,2.847815e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,2.564816e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,2.330621e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,2.126517e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,1.943483e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,1.770132e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,1.616059e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,1.482159e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,1.353662e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,1.23417e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,1.134536e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,1.031778e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,6.056152e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,744633.2);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,1.44115e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,2.155111e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,1.970218e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,2.036524e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,2.137164e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,2.239696e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,2.349169e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,2.459599e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,2.581443e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,2.703897e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,2.835539e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,2.967579e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,3.112724e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,3.192e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,2.830287e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,2.619208e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,2.468354e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,2.345447e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,2.238609e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,2.140934e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,2.049524e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,1.958063e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,1.872921e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,1.795774e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,1.718428e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,1.642444e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,1.576381e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,1.504799e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,3.661539e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(1.879626e+08);

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
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,577.0824);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,422811.9);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,833341.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,1014529);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,1253684);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,1466732);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,1641726);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,1782364);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,1898720);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,2002649);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,2105355);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,2206890);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,2308296);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,2404679);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,2347780);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,1438341);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,994559.1);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,737263.1);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,564375.5);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,441255);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,349265.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,278688.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,223765.6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,179886.5);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,144780.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,116140.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,93019.71);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,74006.44);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,58419.57);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,190485.4);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,6.086589);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,166.4373);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,234.3236);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,259.452);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,288.7603);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,312.364);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,330.3275);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,343.9366);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,354.7604);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,364.2498);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,373.5502);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,382.6446);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,391.6397);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,400.0535);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,395.3633);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,308.1022);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,255.127);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,218.7809);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,190.703);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,168.0344);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,148.9618);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,132.6465);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,118.4616);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,105.9085);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,94.74813);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,84.65725);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,75.56101);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,67.19588);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,59.55758);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,106.4163);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(4.796548e+08);

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
