#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(-1.310117,-3.446087,7.029799,0.4000667);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetLogy();
   Z_dR_Bj1_tags_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_17->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(18.15738);
   st_stack_54->SetMaximum(1.036218);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetTitleOffset(1);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Event/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetTitleSize(0.037);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetTitleOffset(1);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.2321455);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,0.7745624);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,0.8616169);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,0.6004533);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,0.3471022);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.2131721);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.1517874);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.1127245);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.1037958);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.07254547);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.07142938);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.06919722);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.05357204);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.05357204);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.04799162);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.0491077);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.02566993);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.01897343);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.01227693);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.002232168);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.003348252);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.001116084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.001116084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,0.001116084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.01609639);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.02940199);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.03101027);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.02588738);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.01968236);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.01542459);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.01301567);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.01121651);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.01076313);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.008998158);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.008928673);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.008788055);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.007732458);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.007732458);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.007318653);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.007403265);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.005352551);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.004601733);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.003701632);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.001578381);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.001933114);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.001116084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.001116084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,0.001116084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.08079074);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.3598194);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.4016077);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.2608471);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.1225791);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.06803431);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.05337174);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.03929568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.03694967);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.03343065);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.02844538);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.02214048);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.02272698);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.02023434);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.01950121);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.01700858);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.009237417);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.005571775);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.004692021);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.002052759);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.002052759);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.00102638);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.000879754);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.000879754);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.000439877);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.0001466257);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.0001466257);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.003441801);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.007263522);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.007673721);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.006184406);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.004239485);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.003158414);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.002797439);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.002400366);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.00232761);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.002213999);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.002042259);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.001801766);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.001825475);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.001722462);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.00169097);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.001579207);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.001163805);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.0009038613);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.00082944);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.000548623);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.000548623);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.000387935);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0003591581);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0003591581);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0002539631);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.0001466257);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.0001466257);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
