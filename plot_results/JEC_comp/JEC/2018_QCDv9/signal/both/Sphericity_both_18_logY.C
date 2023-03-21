#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Mon Mar 20 11:49:49 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2183529,-0.2436282,1.171633,0.789558);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15709);
   Sphericity_both_18->SetRightMargin(0.1234783);
   Sphericity_both_18->SetBottomMargin(0.12);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(4.308881);
   
   TH1F *st_stack_251 = new TH1F("st_stack_251","",25,0,1);
   st_stack_251->SetMinimum(0.7591964);
   st_stack_251->SetMaximum(4.855561);
   st_stack_251->SetDirectory(0);
   st_stack_251->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_251->SetLineColor(ci);
   st_stack_251->GetXaxis()->SetTitle("Sphericity");
   st_stack_251->GetXaxis()->SetRange(1,25);
   st_stack_251->GetXaxis()->SetLabelFont(42);
   st_stack_251->GetXaxis()->SetTitleOffset(1);
   st_stack_251->GetXaxis()->SetTitleFont(42);
   st_stack_251->GetYaxis()->SetTitle("Event/0.04");
   st_stack_251->GetYaxis()->SetLabelFont(42);
   st_stack_251->GetYaxis()->SetTitleSize(0.037);
   st_stack_251->GetYaxis()->SetTitleFont(42);
   st_stack_251->GetZaxis()->SetLabelFont(42);
   st_stack_251->GetZaxis()->SetTitleOffset(1);
   st_stack_251->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_251);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,2.436616);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,2.406951);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,1.369738);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.8771762);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.5603225);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.2116851);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.09958737);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.04038235);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.04019408);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.02467303);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.01087185);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.005916541);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.002397148);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.007627149);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.002582708);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.003322577);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.005091459);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.007910893);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.08746192);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.08568159);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.06456288);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.04939149);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.05532833);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.02568004);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.01667237);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.0102784);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.0106773);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.008329908);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.005012572);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.004186919);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.002397148);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.004411684);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.002582708);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.003322577);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.003647183);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.004584965);
   VbbHcc_both_Sphericity_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,1.139755);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,1.035381);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.531216);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.3446904);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.1995734);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.1098794);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.05633435);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.02918135);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.02174862);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.01065786);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.01001482);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.007028261);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.004064159);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.00530406);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.004607775);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.002331385);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.00140343);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.001847253);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.001315263);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.0003105083);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.02027191);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.02079124);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.01386216);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.01121386);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.00962189);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.006518113);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.00464544);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.004710829);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.002748513);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.001935984);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.001936821);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.001587724);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.001238844);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.001375651);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.001274745);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.0009395586);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.0007086652);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.0008375922);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.0006617917);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.0003105083);
   VbbHcc_both_Sphericity_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
