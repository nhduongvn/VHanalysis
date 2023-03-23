#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Mar 23 11:25:12 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2183529,-0.2169598,1.171633,1.591039);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetFillStyle(4000);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15709);
   Sphericity_tags_18->SetRightMargin(0.1234783);
   Sphericity_tags_18->SetBottomMargin(0.12);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.410239);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(0);
   st_stack_59->SetMaximum(1.410239);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetTitle("Sphericity");
   st_stack_59->GetXaxis()->SetRange(1,25);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Event/0.04");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetTitleSize(0.037);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.1644493);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.5720211);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.8596767);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.8212711);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.6998859);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.3083945);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.1747347);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.07949702);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.06545514);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.06682141);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.03028966);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.02247834);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.005670012);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.01762116);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.007177159);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.01108632);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.005091459);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.01030457);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,0.004919465);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.02079236);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.04745167);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.05248381);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.04778185);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.05940342);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.02852886);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.02118597);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.01453901);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.01326595);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.01329708);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.008917735);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.008068355);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.004056841);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.006849382);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.004156768);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.00550446);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.003647183);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.005178124);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,0.003479033);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(1548);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.09559265);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.2474083);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.3108214);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.280726);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.2176279);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.1334204);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.08563606);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.04564047);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.03271165);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.02183491);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.01437771);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.01698655);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.01213062);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.009602735);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.008619587);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.005056462);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.003827733);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.002915193);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.0006262332);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.001712674);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.005837337);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.009392864);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.01046961);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.009976878);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.009912776);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.007108058);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.006651916);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.00396529);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.00338047);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.002747598);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.002241106);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.002429594);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.00208039);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.001865539);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.001696628);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.001361145);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.001129);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.001041862);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.0004478256);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.0007730595);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(4583);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
