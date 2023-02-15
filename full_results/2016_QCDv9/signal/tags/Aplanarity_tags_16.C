#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-0.9901064,1.171633,7.26078);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.435692);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0);
   st_stack_61->SetMaximum(6.435692);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,3.175191);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,2.32705);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,1.649263);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,1.015367);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.7315155);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.4760734);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.3581146);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.3161413);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.1998952);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.1226569);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.1009985);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.07660481);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.07953801);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.04850463);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.01774892);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.0212468);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.01059785);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,0.003231239);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,0.002871662);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.09742587);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.0831537);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.07020282);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.05503774);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.04699494);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.0377113);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.03280019);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.03072533);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.02582753);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.0195597);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.01727746);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.01503564);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.01533167);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.01215594);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.007272044);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.008043123);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.00535802);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,0.003231239);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,0.002871662);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(3765);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1.11527);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.7285114);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.4845038);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.3378989);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.2193018);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.1546057);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.1107402);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.07130661);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.04379103);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.03325612);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.02123537);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.01123423);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.01110722);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.004371945);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.002734504);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.002231758);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.001584193);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.0004216175);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.001135226);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.02053668);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01669924);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.01361809);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.01141231);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.009200684);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.007735957);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.006531246);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.005251833);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.004122316);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.003598568);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.002871881);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.002066902);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.002034732);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.001278406);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.001037175);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0009216915);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0007926875);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0004216175);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0006561877);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(8944);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
