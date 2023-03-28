#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.01757641,7.029799,0.1288937);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1142466);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0);
   st_stack_113->SetMaximum(0.1142466);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Event/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.05196745);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.06416245);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.07128356);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.0454291);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.0449124);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.02285712);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.008543332);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.0114158);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.00299523);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.005928949);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.007929763);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.008831469);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.005649264);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.006039006);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.005760599);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01236416);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01373249);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.01459595);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.0117461);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.01160763);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.008088886);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.004940408);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.005733707);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.00299523);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.004192404);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.004607234);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.005103837);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.004012999);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.004275338);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.004073561);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(124);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.008765548);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.02068365);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.02354115);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.02123967);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.01251364);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.006534863);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.004491452);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.003418637);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.002305133);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.003023297);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.002885904);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.002253331);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.001543107);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.002331245);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.001118515);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.001139788);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0003173686);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,0.0003868693);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.001817401);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.002808131);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.00302826);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.0028316);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.002200578);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.001590654);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001302886);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001145647);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.0009005667);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001071671);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001092072);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.0009204585);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0007060064);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.0009526051);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0006463197);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0006581514);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0003173686);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.0003868693);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(317);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
