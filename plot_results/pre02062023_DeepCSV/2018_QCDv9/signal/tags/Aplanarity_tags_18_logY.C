#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,0.4069208,1.171633,3.110697);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(515.7166);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(5.387334);
   st_stack_63->SetMaximum(692.3403);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,3.772297);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,2.7527);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,1.995084);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,1.268422);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.9426352);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.6914801);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.5694703);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.360718);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.2687127);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.1778585);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.1725416);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.1164692);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.09217044);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.05585594);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.0287086);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.02741332);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.01037504);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.00704438);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,0.005171);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,0.002636796);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.09986577);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.08553769);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.07325972);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.05916085);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.04935565);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.04254156);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.03898744);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.03123297);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.02632639);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.02287963);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.02126181);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.01788562);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.01609805);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.01219901);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.00987343);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.008377246);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.005278362);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.004073975);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,0.003834953);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,0.002636796);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1.384868);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.9112628);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.6118193);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.4106117);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.2835522);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.1955293);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.1394129);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.09598217);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.05703688);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.03644676);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.02401589);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.02054102);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.01461283);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.008157461);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.004643342);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.00389824);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.0006940122);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.001187188);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.000356596);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0003697091);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.02305205);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01875659);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.01525633);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.0125312);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.01045249);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.008654723);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.007289506);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.006074615);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.004677897);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.00370647);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.003036724);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.002816369);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.002228629);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.001683618);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.001294665);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.001192583);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0004909281);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0006969021);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.000356596);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0003697091);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(12310);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
