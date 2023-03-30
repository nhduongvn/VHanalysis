void Aplanarity_algo_noMassCorr_16()
{
//=========Macro generated from canvas: Aplanarity_algo_noMassCorr_16/Aplanarity_algo_noMassCorr_16
//=========  (Thu Mar 30 10:44:31 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_noMassCorr_16 = new TCanvas("Aplanarity_algo_noMassCorr_16", "Aplanarity_algo_noMassCorr_16",0,0,600,600);
   Aplanarity_algo_noMassCorr_16->SetHighLightColor(2);
   Aplanarity_algo_noMassCorr_16->Range(-0.2183529,-0.1779362,1.171633,1.304866);
   Aplanarity_algo_noMassCorr_16->SetFillColor(0);
   Aplanarity_algo_noMassCorr_16->SetFillStyle(4000);
   Aplanarity_algo_noMassCorr_16->SetBorderMode(0);
   Aplanarity_algo_noMassCorr_16->SetBorderSize(2);
   Aplanarity_algo_noMassCorr_16->SetLeftMargin(0.15709);
   Aplanarity_algo_noMassCorr_16->SetRightMargin(0.1234783);
   Aplanarity_algo_noMassCorr_16->SetBottomMargin(0.12);
   Aplanarity_algo_noMassCorr_16->SetFrameFillStyle(1000);
   Aplanarity_algo_noMassCorr_16->SetFrameBorderMode(0);
   Aplanarity_algo_noMassCorr_16->SetFrameFillStyle(1000);
   Aplanarity_algo_noMassCorr_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.10151);
   
   TH1F *st_stack_445 = new TH1F("st_stack_445","",50,0,1);
   st_stack_445->SetMinimum(0);
   st_stack_445->SetMaximum(1.156585);
   st_stack_445->SetDirectory(0);
   st_stack_445->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_445->SetLineColor(ci);
   st_stack_445->GetXaxis()->SetTitle("Aplanarity");
   st_stack_445->GetXaxis()->SetRange(1,50);
   st_stack_445->GetXaxis()->SetLabelFont(42);
   st_stack_445->GetXaxis()->SetLabelSize(0.035);
   st_stack_445->GetXaxis()->SetTitleSize(0.035);
   st_stack_445->GetXaxis()->SetTitleFont(42);
   st_stack_445->GetYaxis()->SetTitle("Event/0.02");
   st_stack_445->GetYaxis()->SetLabelFont(42);
   st_stack_445->GetYaxis()->SetLabelSize(0.035);
   st_stack_445->GetYaxis()->SetTitleSize(0.037);
   st_stack_445->GetYaxis()->SetTitleOffset(0);
   st_stack_445->GetYaxis()->SetTitleFont(42);
   st_stack_445->GetZaxis()->SetLabelFont(42);
   st_stack_445->GetZaxis()->SetLabelSize(0.035);
   st_stack_445->GetZaxis()->SetTitleSize(0.035);
   st_stack_445->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_445);
   
   
   TH1D *VbbHcc_algo_noMassCorr_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_noMassCorr_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(1,0.7050948);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(2,0.1254054);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(3,0.05389816);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(4,0.03455761);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(5,0.009257635);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(6,0.005798509);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(7,0.01165037);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(8,0.009155157);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinContent(10,0.002982695);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(1,0.04604622);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(2,0.0192497);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(3,0.01243212);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(4,0.01021846);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(5,0.005348013);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(6,0.004100236);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(7,0.005826042);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(8,0.005291651);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetBinError(10,0.002982695);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noMassCorr_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_noMassCorr_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_noMassCorr_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(1,0.2091585);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(2,0.0559761);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(3,0.02396226);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(4,0.01484542);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(5,0.007472439);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(6,0.00614417);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(7,0.005416174);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(8,0.00230239);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(9,0.003005574);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(10,0.001178352);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(11,0.001133391);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(12,0.001178743);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(13,0.0004315001);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinContent(14,0.001118436);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(1,0.00895207);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(2,0.004630718);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(3,0.003051355);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(4,0.002392431);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(5,0.001700112);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(6,0.001537822);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(7,0.00145031);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(8,0.0009425835);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(9,0.001073069);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(10,0.0006817233);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(11,0.0006574944);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(12,0.0006819386);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(13,0.0004315001);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetBinError(14,0.000645813);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noMassCorr_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noMassCorr_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_noMassCorr_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_noMassCorr_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_algo_noMassCorr_16->Modified();
   Aplanarity_algo_noMassCorr_16->cd();
   Aplanarity_algo_noMassCorr_16->SetSelected(Aplanarity_algo_noMassCorr_16);
}
