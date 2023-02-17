#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_18()
{
//=========Macro generated from canvas: Aplanarity_alljet_18/Aplanarity_alljet_18
//=========  (Tue Feb 14 15:57:12 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_18 = new TCanvas("Aplanarity_alljet_18", "Aplanarity_alljet_18",0,0,600,600);
   Aplanarity_alljet_18->SetHighLightColor(2);
   Aplanarity_alljet_18->Range(-0.2183529,-174.0727,1.171633,1276.533);
   Aplanarity_alljet_18->SetFillColor(0);
   Aplanarity_alljet_18->SetFillStyle(4000);
   Aplanarity_alljet_18->SetBorderMode(0);
   Aplanarity_alljet_18->SetBorderSize(2);
   Aplanarity_alljet_18->SetLeftMargin(0.15709);
   Aplanarity_alljet_18->SetRightMargin(0.1234783);
   Aplanarity_alljet_18->SetBottomMargin(0.12);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1131.473);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0);
   st_stack_255->SetMaximum(1131.473);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,670.714);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,182.021);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,99.32501);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,63.55893);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,43.28813);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,30.01469);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,21.7023);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,15.11421);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,11.28347);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,7.944931);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,5.685666);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,3.919392);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.848589);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.935648);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,1.223886);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,0.7738731);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,0.4364505);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,0.2863296);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,0.1603079);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,0.1303777);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,0.04168695);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,0.01339706);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.485914);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,0.7519472);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,0.5718599);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,0.4477601);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,0.3764306);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,0.2997989);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,0.2713048);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,0.2202725);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,0.2129298);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,0.1546604);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,0.13047);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,0.105655);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,0.09783657);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,0.07606169);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,0.0710357);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,0.04666569);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,0.03422677);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,0.02857133);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,0.02104969);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,0.03232257);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,0.01105666);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,0.005202549);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(479240);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,83.60121);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,31.61273);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,17.74117);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,11.09061);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,7.252654);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,4.862889);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,3.250366);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,2.23011);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,1.557189);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,1.036467);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,0.7234253);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,0.501286);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,0.316804);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,0.2113095);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,0.1284026);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,0.07626413);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,0.04416151);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,0.02301837);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,0.01119706);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,0.00619493);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,0.001942964);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,0.001101816);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,0.1833741);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,0.1139171);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,0.08339786);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,0.06500113);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,0.05420521);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,0.04299289);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,0.03466327);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,0.02930661);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,0.02567603);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,0.02005461);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,0.01759394);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,0.0202607);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,0.01080594);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,0.008648603);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,0.006844199);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,0.005187491);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,0.004793459);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,0.002830184);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,0.002633618);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,0.001473398);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,0.0008066698);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,0.000641865);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(488139);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_alljet_18->Modified();
   Aplanarity_alljet_18->cd();
   Aplanarity_alljet_18->SetSelected(Aplanarity_alljet_18);
}
