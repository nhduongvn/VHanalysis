#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.02342007,7.264125,0.1717472);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1522305);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0);
   st_stack_118->SetMaximum(0.1522305);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_118->GetXaxis()->SetRange(1,31);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Event/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetTitleSize(0.037);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.02458256);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.0416983);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.06747166);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.0942621);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.07963172);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.0512414);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.03670522);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.02612933);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.02515408);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.007687659);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.01928518);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.01566381);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.01955522);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.02683734);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.01473183);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.003449277);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.001046595);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.003907839);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,0.001730189);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.006679363);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.009502552);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01106417);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.01383214);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.0121485);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01047414);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.00809973);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.006856004);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.006839434);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.003845672);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.005984994);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.005290761);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.006836681);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.007241683);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.005970935);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.002471751);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.001046595);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.002763761);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,0.001730189);
   VbbHcc_algo_H_dR_stack_1->SetEntries(335);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.003911714);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.01484123);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.02414877);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.03208919);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.02665231);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.02493256);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.01428194);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.009124317);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.00747326);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.006751659);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.008485207);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.009069767);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.006146332);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.006706618);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.003219828);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.001595641);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.00163405);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0009357498);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.0007754806);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0002570058);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,0.0001926982);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.0009716298);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.00188976);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.002397167);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.002796894);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.002551974);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.002450473);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.001812736);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.001463523);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.001337163);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001262356);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001429767);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001467411);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001180986);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001260233);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.0008704725);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0006114387);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0006182733);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0004566684);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0004479748);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0002570058);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,0.0001926982);
   VbbHcc_algo_H_dR_stack_2->SetEntries(887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
