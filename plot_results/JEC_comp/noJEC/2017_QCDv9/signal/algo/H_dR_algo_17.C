#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Mon Mar 20 11:48:31 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.06276831,7.264125,0.4603009);
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
   st->SetMaximum(0.407994);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0);
   st_stack_118->SetMaximum(0.407994);
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
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.03468553);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.1195759);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.2009242);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.2456623);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.2256392);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.2140366);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.1321829);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.08465363);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.07111545);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.05156324);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.03983182);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.04882491);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.02898784);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.02643619);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.01221476);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.001479404);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.003800204);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.001955239);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,0.001245676);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.008384849);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01517109);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01942084);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.02198114);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.02076029);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.02072431);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.01571746);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.01277089);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.01142083);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.009821202);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.008263665);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.009400517);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.007207988);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.006726674);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.004638881);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.001479404);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.0026872);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.001955239);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,0.001245676);
   VbbHcc_algo_H_dR_stack_1->SetEntries(919);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.00923517);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.03249921);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.06058493);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.09297272);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.1041202);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.08828376);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.05733194);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.02597828);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.01987506);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.01382908);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.01299312);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.01219438);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.009652738);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.008347679);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.004454786);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.001988922);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001437812);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.000702316);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.000180096);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0005020342);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,0.0002650135);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001473256);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002771246);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.003802514);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.004715534);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.005041172);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.004631782);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.003721125);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.002533267);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.002200619);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001802956);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001764796);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001725272);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001545566);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001414736);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001014737);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0007007238);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0005964489);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0004111843);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.000180096);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0003553898);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,0.0002650135);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2405);

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
