#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_noMassCorr_16()
{
//=========Macro generated from canvas: Aplanarity_both_noMassCorr_16/Aplanarity_both_noMassCorr_16
//=========  (Thu May 25 11:52:41 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_noMassCorr_16 = new TCanvas("Aplanarity_both_noMassCorr_16", "Aplanarity_both_noMassCorr_16",0,0,600,600);
   Aplanarity_both_noMassCorr_16->SetHighLightColor(2);
   Aplanarity_both_noMassCorr_16->Range(-0.2183529,-0.5951418,1.171633,4.364373);
   Aplanarity_both_noMassCorr_16->SetFillColor(0);
   Aplanarity_both_noMassCorr_16->SetFillStyle(4000);
   Aplanarity_both_noMassCorr_16->SetBorderMode(0);
   Aplanarity_both_noMassCorr_16->SetBorderSize(2);
   Aplanarity_both_noMassCorr_16->SetLeftMargin(0.15709);
   Aplanarity_both_noMassCorr_16->SetRightMargin(0.1234783);
   Aplanarity_both_noMassCorr_16->SetBottomMargin(0.12);
   Aplanarity_both_noMassCorr_16->SetFrameFillStyle(1000);
   Aplanarity_both_noMassCorr_16->SetFrameBorderMode(0);
   Aplanarity_both_noMassCorr_16->SetFrameFillStyle(1000);
   Aplanarity_both_noMassCorr_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.868422);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",50,0,1);
   st_stack_184->SetMinimum(0);
   st_stack_184->SetMaximum(3.868422);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("Aplanarity");
   st_stack_184->GetXaxis()->SetRange(1,50);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Event/0.02");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_both_noMassCorr_Aplanarity_stack_1 = new TH1D("VbbHcc_both_noMassCorr_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(1,2.251821);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(2,0.7061135);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(3,0.3590533);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(4,0.1971982);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(5,0.1448783);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(6,0.08639011);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(7,0.06065148);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(8,0.04671758);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(9,0.01524262);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(10,0.00592866);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(11,0.01013068);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(12,0.003721862);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(13,0.009246623);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinContent(15,0.003231239);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(1,0.08163515);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(2,0.04587199);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(3,0.03270761);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(4,0.02440276);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(5,0.02097169);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(6,0.01581119);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(7,0.01388333);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(8,0.01176323);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(9,0.006827758);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(10,0.00419241);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(11,0.005237964);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(12,0.002996799);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(13,0.005339603);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetBinError(15,0.003231239);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetEntries(1378);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_noMassCorr_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_noMassCorr_Aplanarity_stack_2 = new TH1D("VbbHcc_both_noMassCorr_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(1,0.958969);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(2,0.2958586);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(3,0.1509239);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(4,0.09005255);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(5,0.04994826);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(6,0.03087421);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(7,0.02329497);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(8,0.01870664);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(9,0.009462121);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(10,0.007153085);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(11,0.00570336);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(12,0.005425392);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(13,0.00338465);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(14,0.001028171);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(15,0.001060587);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinContent(17,0.0002181993);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(1,0.01909743);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(2,0.01063466);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(3,0.007585112);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(4,0.005910541);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(5,0.004390953);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(6,0.00343502);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(7,0.002977509);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(8,0.002684604);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(9,0.001880547);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(10,0.001646094);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(11,0.001477198);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(12,0.001452409);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(13,0.001136994);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(14,0.0006021982);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(15,0.0006137265);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetBinError(17,0.0002181993);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetEntries(4413);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_noMassCorr_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_noMassCorr_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_noMassCorr_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_noMassCorr_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_noMassCorr_16->Modified();
   Aplanarity_both_noMassCorr_16->cd();
   Aplanarity_both_noMassCorr_16->SetSelected(Aplanarity_both_noMassCorr_16);
}
