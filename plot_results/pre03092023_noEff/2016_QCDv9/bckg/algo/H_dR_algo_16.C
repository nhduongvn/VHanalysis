#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Thu Feb 16 10:35:33 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-20893.76,7.264125,153220.9);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(135809.4);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",30,0,6);
   st_stack_85->SetMinimum(0);
   st_stack_85->SetMaximum(135809.4);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_85->GetXaxis()->SetRange(1,31);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Events/0.2");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,55108.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,52677.44);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,42398.47);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,45179.56);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,41240.15);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,48483.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,63973.75);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,42040.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,58855.93);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,87007.31);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,56472.58);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,55610.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,61938.22);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,59140.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,31733.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,15841.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,16371.71);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,5991.663);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,4101.931);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,3110.378);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,2899.043);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,753.9571);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,99.64476);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,28.19709);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,16.88902);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,3.318796);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,5952.809);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,5574.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,5499.013);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,6550.499);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,5455.293);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,6268.329);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,21134.41);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,4937.389);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,7355.294);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,24667.28);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,6439.818);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,5792.925);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,6006.278);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,6155.144);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,4476.307);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,1760.353);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,2900.108);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,1116.95);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,975.4375);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,862.9331);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,1975.502);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,421.9537);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,44.9606);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,13.08988);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,11.9651);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,3.318796);
   VbbHcc_algo_H_dR_stack_1->SetEntries(21684);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.4752583);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,1070.455);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,2079.701);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,2563.962);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,2854.499);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,2951.04);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,3002.691);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,3074.305);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,3186.459);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,3344.041);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,3532.305);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,3598.346);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,3548.646);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,3376.592);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,3045.443);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,1851.798);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1135.278);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,699.3522);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,414.9581);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,235.7599);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,120.674);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,62.41204);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,27.82529);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,10.45374);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,3.079747);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,0.9899265);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.3705912);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,0.05384579);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.1825277);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,8.593024);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,11.98543);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,13.3284);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,14.10484);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,14.37891);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,14.53073);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,14.7198);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,14.97793);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,15.31023);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,15.73256);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,15.87023);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,15.72298);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,15.31626);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,14.53101);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,11.29787);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,8.806951);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,6.881756);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,5.27585);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,3.954103);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,2.812809);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.032349);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.346114);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,0.8189156);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.4345647);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.2366208);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.15393);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,0.05384579);
   VbbHcc_algo_H_dR_stack_2->SetEntries(695813);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
