#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.02261296,7.264125,0.1658284);
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
   st->SetMaximum(0.1469842);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0);
   st_stack_118->SetMaximum(0.1469842);
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
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,0.0006493931);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.01578425);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.04229218);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.06417555);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.09184354);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.07753113);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.04367041);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.04015422);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.02620565);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.0329592);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.01338424);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.0163567);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.02497781);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.01918212);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.01919794);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.0117465);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.006111622);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.002007674);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.001916684);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,0.0009159819);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,0.0006493931);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.005340512);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.009372527);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01070674);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.01326381);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.0119729);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.010131);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.00838643);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.007216127);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.007887955);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.005065007);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.005515162);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.00676863);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.006114917);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.006763569);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.005602059);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.003089099);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002007674);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.001916684);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,0.0009159819);
   VbbHcc_algo_H_dR_stack_1->SetEntries(331);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(1,0.0001556929);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.001213745);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.003467349);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.01410719);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.02410324);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.03015337);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.02703489);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.0250267);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.01576014);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.007577764);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.008792084);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.007295129);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.009046927);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.005092031);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.006099651);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.004150052);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.003266848);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.002756865);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001534143);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0012767);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.001249325);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0002568697);
   VbbHcc_algo_H_dR_stack_2->SetBinError(1,0.0001556929);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.0005243833);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.0008909547);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.001837208);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.002396656);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.002701259);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.002565661);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.002448309);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.001940173);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.001344351);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.001438521);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001371938);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001449885);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.001086308);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001204793);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.0009748813);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.0008841796);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0008039363);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0006295585);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0005413499);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0005595768);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0002568697);
   VbbHcc_algo_H_dR_stack_2->SetEntries(869);

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
