#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-3.095915,1.171633,0.750239);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(14.092);
   st_stack_191->SetMaximum(2.320724);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Event/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1.877259);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1.193621);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.7908789);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.4980209);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.3814936);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.2635077);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.1923359);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.1394341);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.08913265);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.0573368);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.0562097);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.04724766);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.04167766);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.0158278);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.009128523);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.003704111);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.001556614);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(22,0.001408621);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.07024358);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.04878555);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.04166583);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.03093994);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.02990584);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.02208225);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.01949109);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.016359);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.01317721);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.01011104);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01044642);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.009504097);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.009561219);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.005124283);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.004129789);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.002228095);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.001556614);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(22,0.001408621);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.7484426);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.5523506);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.3661186);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.2463302);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.1598387);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.1223597);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.07992844);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.06050653);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.03479789);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.02508999);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.0224225);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.01300274);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.009852886);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.004583508);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.003448276);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.001692165);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.001253705);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.0009418259);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0003032518);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.0142055);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01199179);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.009769445);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.008026904);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.006362428);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.005491159);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.00458698);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.005236159);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.002903503);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.002808647);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.003370542);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.002510425);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.001674527);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001032074);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0009165714);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0006540981);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0005699161);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0005556558);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0003032518);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
