#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Mon Dec 19 11:15:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,-1.777096,7.264125,10.51232);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLogy();
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(2.601666);
   st->SetMaximum(7.144775e+08);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0.4984638);
   st_stack_22->SetMaximum(1.920335e+09);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,20240.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,2422626);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,3192134);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,2629225);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,2898325);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,2819787);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,3283197);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,3288078);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,3432597);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,3820801);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,4162056);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,4733291);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,5945508);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,6276640);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,6873369);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,4574309);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,3346384);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,2883405);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,2472938);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,1602773);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,1306085);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,895314.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,576354.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,433768);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,215275.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,73931.93);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,38260.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,2588.018);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,18265.82);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,108330.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,134649.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,122824.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,143158.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,138374.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,163263.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,156419.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,155186.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,162578.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,167310.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,184511.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,218151.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,210940.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,231017.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,184536.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,157643.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,154955.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,147822.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,107994.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,101625.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,86195.92);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,64268.83);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,62021.87);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,42258);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,21422.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,17416.45);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1879.097);
   VbbHcc_tags_H_dR_stack_1->SetEntries(589663);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,45.05988);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,63806.43);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,115908.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,140891.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,169454.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,185275);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,190826.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,193420.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,197444.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,206289.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,219608.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,236762.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,255821.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,274634.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,271406.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,155988.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,100158);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,67925.31);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,46456.26);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,31325.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,20640.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,13206.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,7909.613);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,4287.084);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,2065.67);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,846.6717);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,226.2352);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,13.64857);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.792603);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,68.00741);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,91.81018);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,101.2276);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,110.9706);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,116.0474);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,117.8472);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,118.7557);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,120.1246);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,122.939);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,127.004);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,132.0177);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,137.4169);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,142.4832);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,141.6951);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,107.0968);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,85.45261);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,70.05992);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,57.64777);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,47.09576);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,38.03037);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,30.24825);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,23.26647);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,16.99779);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,11.74479);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,7.444835);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,3.804762);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.8959127);
   VbbHcc_tags_H_dR_stack_2->SetEntries(4.80993e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
