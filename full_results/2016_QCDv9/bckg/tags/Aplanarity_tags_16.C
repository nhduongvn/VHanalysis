#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-3610636,1.171633,2.6478e+07);
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
   st->SetMaximum(2.346913e+07);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0);
   st_stack_61->SetMaximum(2.346913e+07);
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
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.499885e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,7366206);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3459690);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,1837717);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1175411);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,659565.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,554586.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,414498.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,203305.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,119048.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,59426.26);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,69325.05);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,80413.36);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,45579.63);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,11999.76);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,7548.417);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,4639.465);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,2610.893);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,2012.214);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,359.6592);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,37.39603);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,229330.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,226571.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,138235.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,104141.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,83495.52);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,49956.87);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,66198.24);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,66795.26);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,38041.23);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,11862.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,7696.946);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,24694.76);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,34703.61);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,26603.65);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,3135.471);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,2776.168);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,2242.805);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,1671.755);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,1870.662);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,325.4405);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,29.56437);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(451898);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.07030749);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,647241.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,449468.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,297721);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,203586.2);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,142459.2);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,101580.2);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,73115.78);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,52883.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,38228.97);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,27624.68);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,19790.16);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,14015.52);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,9779.199);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,6723.262);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,4484.626);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,2895.934);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,1816.507);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,1074.074);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,590.5482);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,292.634);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,130.9364);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,46.36644);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,13.31597);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,1.690707);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.1427624);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.05980982);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,212.5875);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,177.9703);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,145.1004);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,120.1185);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,100.5593);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,84.97257);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,72.12345);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,61.34479);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,52.18378);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,44.36492);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,37.56861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,31.62539);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,26.42513);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,21.90822);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,17.90157);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,14.37694);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,11.4049);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,8.7629);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,6.503404);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,4.57161);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,3.062258);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.822843);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,0.9807896);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.3469762);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.1013675);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(3.141452e+07);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
