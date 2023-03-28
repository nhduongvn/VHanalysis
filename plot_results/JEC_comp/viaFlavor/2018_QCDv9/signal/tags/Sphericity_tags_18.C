#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2183529,-0.198732,1.171633,1.457368);
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
   st->SetMaximum(1.291758);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(0);
   st_stack_59->SetMaximum(1.291758);
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
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.1318541);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.4899971);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.7943164);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.7698923);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.6571668);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.3158297);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.2151987);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.1242728);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.09205706);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.09982435);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.04848094);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.05067701);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.03771361);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.03678216);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.02280561);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.01949179);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.01553128);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.01387501);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,0.004725794);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,0.002958322);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.01872874);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.04449642);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.05078669);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.04670404);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.05806251);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.02919354);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.02413119);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.01793295);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.01604426);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.01632445);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.01138356);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.01184339);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.00994153);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.009919591);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.007650471);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.007353614);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.006164652);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.006249071);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,0.00334263);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,0.002958322);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(1554);

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
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.08126437);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.2375164);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.2778427);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.2735704);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.2077037);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.1292348);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.0958951);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.05833047);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.04869709);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.03179901);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.03096138);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.02508057);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.01792237);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.01654869);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.01492748);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.01024229);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.005946964);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.004919109);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.003411479);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.0009785585);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.0003035629);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.005331222);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.009229471);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.00991492);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.01018289);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.00983508);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.006770352);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.00606909);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.005726185);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.00411368);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.003328942);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.003251338);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.002983527);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.002560637);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.002382781);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.002258148);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.001897808);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.001409853);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.00132949);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.001086563);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.0005782);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.0003035629);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(4647);

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
