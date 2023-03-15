#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Mar  9 13:08:27 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-0.1243854,1.171633,0.3887472);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.047437);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(0.8653474);
   st_stack_189->SetMaximum(2.174873);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1.212732);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.80549);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.5798622);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.3627566);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.2549135);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.1794912);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.128744);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.116481);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.06886314);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.05868362);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.04672271);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.02372064);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.03254081);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.02066234);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.005805087);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.05975148);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.04865254);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.04145407);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.03249812);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.02804771);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.02341705);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.01964192);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.01870266);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.01554993);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.01355193);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01153814);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.008394402);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.009818711);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.007831931);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.004105049);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(1377);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.4866404);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.3593053);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.2499188);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.1781398);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.1179345);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.07971336);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.06650734);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.03844743);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.02549143);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.01837696);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.01088616);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.007007641);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.0052886);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.002856552);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.001610651);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.001578453);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.000375111);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0004216175);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.0007826774);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.01354059);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01171491);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.00975753);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.008287976);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.006736801);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.005536489);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.005050368);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.003861822);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.00314642);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.002665545);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.002055665);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.001653951);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.001367989);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001028448);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0008062382);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.000790365);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.000375111);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0004216175);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0005534366);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(4411);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
