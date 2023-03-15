#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Mar  9 13:09:05 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2183529,-0.0904075,1.171633,0.6629884);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15709);
   Sphericity_tags_16->SetRightMargin(0.1234783);
   Sphericity_tags_16->SetBottomMargin(0.12);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5876488);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(0);
   st_stack_57->SetMaximum(0.5876488);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetTitle("Sphericity");
   st_stack_57->GetXaxis()->SetRange(1,25);
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetTitleOffset(1);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Event/0.04");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetTitleSize(0.037);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetTitleOffset(1);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.03531105);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.1722091);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.2657113);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.3395207);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.3558277);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.3052207);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.3074462);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.2535028);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.2395614);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.2409147);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.2383919);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.1497417);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.1947135);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.1728449);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.1682142);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.1218222);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.1026524);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.08106762);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,0.05823655);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,0.02326467);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,0.002909221);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.009745471);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.02203133);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.02763042);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.03167345);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.0323657);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.03030076);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.03041242);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.02747859);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.0265997);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.02677452);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.02646854);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.02167463);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.02379103);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.02341355);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.02239557);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.01942712);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.01766906);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.01555952);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,0.01300926);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,0.008246545);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,0.002909221);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
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
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.02517698);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.07322442);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.1142235);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.1308916);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.1319207);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.125516);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.1345982);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.1374146);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.1231892);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.1078896);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.1015775);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.08386716);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.08435737);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.05582984);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.05389487);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.04626596);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.03280866);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.03414405);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.01087351);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.008250748);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.002209612);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.003022782);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.005236293);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.006558194);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.007051842);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.007058722);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.006920111);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.007171896);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.007270235);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.006888811);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.00643038);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.006254394);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.005665712);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.00570073);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.004626491);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.004507713);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.004222285);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.003512585);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.003618908);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.002068358);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.001803502);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.0009039713);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
