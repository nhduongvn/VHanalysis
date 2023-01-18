#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_16/Aplanarity_seljet_16
//=========  (Wed Jan 18 11:42:18 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_16 = new TCanvas("Aplanarity_seljet_16", "Aplanarity_seljet_16",0,0,600,600);
   Aplanarity_seljet_16->SetHighLightColor(2);
   Aplanarity_seljet_16->Range(-0.2183529,0.06936887,1.171633,4.567978);
   Aplanarity_seljet_16->SetFillColor(0);
   Aplanarity_seljet_16->SetFillStyle(4000);
   Aplanarity_seljet_16->SetBorderMode(0);
   Aplanarity_seljet_16->SetBorderSize(2);
   Aplanarity_seljet_16->SetLogy();
   Aplanarity_seljet_16->SetLeftMargin(0.15709);
   Aplanarity_seljet_16->SetRightMargin(0.1234783);
   Aplanarity_seljet_16->SetBottomMargin(0.12);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8287.951);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",50,0,1);
   st_stack_317->SetMinimum(4.066324);
   st_stack_317->SetMaximum(13125.54);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetTitle("Aplanarity");
   st_stack_317->GetXaxis()->SetRange(1,50);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetTitleOffset(1);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.02");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetTitleSize(0.037);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetTitleOffset(1);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,63.29135);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,47.72535);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,31.49562);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,21.74309);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,14.99932);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,10.85954);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,7.801425);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,5.66903);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,4.121737);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,3.113339);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,2.171613);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,1.599381);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,1.163538);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,0.783739);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.5371029);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.2960992);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.189198);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.1095092);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.07737921);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.03987417);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.01549098);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.008034292);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.3129719);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.2729424);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.2223545);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.1846363);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.1537367);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.1308554);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.1110454);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.09444078);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.08033525);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.07006816);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.05843679);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.04999815);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.04266879);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.03516809);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.02932256);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.02148306);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.0171082);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.01316698);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.01136109);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.008210336);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.004912562);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.003598588);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(157244);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,19.58816);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,13.22752);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,8.352698);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,5.553035);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,3.631761);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,2.474593);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,1.675977);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,1.165297);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,0.7920648);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.5282352);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.3505467);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.2538783);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.1699254);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.1032576);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.07311655);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.03949604);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.02186764);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.01507331);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.008936703);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.005300404);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.001215725);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.001114066);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.06073191);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.05011999);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.0399021);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.03257918);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.02635195);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.02177998);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.01790431);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.01493624);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.01232421);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01003455);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.008187175);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.006966041);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.005700695);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.004446126);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.003737234);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.002758919);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.002045371);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.00170898);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001314562);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.00102175);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0004969509);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.0004553594);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(328438);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_16->Modified();
   Aplanarity_seljet_16->cd();
   Aplanarity_seljet_16->SetSelected(Aplanarity_seljet_16);
}
