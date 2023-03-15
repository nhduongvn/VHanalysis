#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-0.1259748,7.264125,0.9238152);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.8188362);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(0);
   st_stack_87->SetMaximum(0.8188362);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.07167569);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.1893627);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.2458571);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.4106964);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.3319569);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.2377702);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.2260295);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.1381928);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.0832605);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.05786826);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.06949155);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.05002969);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.02968892);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.04398926);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.02200817);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.01606283);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.002840873);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.01362345);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.02340024);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.02664758);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.05121229);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.0302712);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.0257374);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.02487184);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.01957601);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.01519393);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.01252407);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01358159);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.0122929);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.008592318);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.01109672);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.007370379);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.006648125);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002840873);
   VbbHcc_algo_H_dR_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.01381378);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.04331672);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.07858206);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.1351944);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.1460903);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.1138993);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.07636429);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.0402874);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.02217422);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.02295895);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.01760093);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.01151479);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01511836);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.01175824);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.007778622);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.004886015);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.002686037);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.002978961);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.0007533387);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0003156401);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.002191866);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.003945143);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.005231319);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.007550109);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.008301936);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.006325766);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.005277469);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.003816401);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.002763636);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.002836503);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.002510716);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.002013327);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.002260151);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.002004559);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001626724);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.001406651);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0009856748);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.001064499);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0005361903);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0003156401);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
