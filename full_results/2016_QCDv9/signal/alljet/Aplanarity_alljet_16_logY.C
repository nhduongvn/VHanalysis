#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_16_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_16/Aplanarity_alljet_16
//=========  (Tue Feb 14 16:07:58 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_16 = new TCanvas("Aplanarity_alljet_16", "Aplanarity_alljet_16",0,0,600,600);
   Aplanarity_alljet_16->SetHighLightColor(2);
   Aplanarity_alljet_16->Range(-0.2183529,-0.1067409,1.171633,5.387961);
   Aplanarity_alljet_16->SetFillColor(0);
   Aplanarity_alljet_16->SetFillStyle(4000);
   Aplanarity_alljet_16->SetBorderMode(0);
   Aplanarity_alljet_16->SetBorderSize(2);
   Aplanarity_alljet_16->SetLogy();
   Aplanarity_alljet_16->SetLeftMargin(0.15709);
   Aplanarity_alljet_16->SetRightMargin(0.1234783);
   Aplanarity_alljet_16->SetBottomMargin(0.12);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(40070.06);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(3.569631);
   st_stack_253->SetMaximum(68943.1);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetTitle("Aplanarity");
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetTitleOffset(1);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetTitleSize(0.037);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetTitleOffset(1);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,355.8239);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,101.374);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,57.04033);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,35.37167);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,24.47544);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,17.1456);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,11.91401);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,9.076959);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,6.250312);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,4.548581);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,3.166905);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,2.27981);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,1.581922);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.087032);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,0.7172593);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,0.6120645);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,0.3174456);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,0.1727039);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,0.09363444);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,0.06075051);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,0.02125052);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,0.008324996);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.05174);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,0.5589763);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,0.419184);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,0.3303181);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,0.2739475);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,0.2294075);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,0.1918936);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,0.168046);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,0.1392352);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,0.1182934);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,0.09843838);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,0.08417107);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,0.06985205);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,0.05695725);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,0.04719622);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,0.04290087);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,0.0312828);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,0.0238699);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,0.01738015);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,0.0133284);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,0.009033759);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,0.004866728);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(234325);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,44.8767);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,17.6985);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,10.1641);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,6.363579);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,4.152342);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,2.704063);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,1.899682);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,1.272069);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,0.8951748);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,0.5948308);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,0.3965638);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,0.2644179);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,0.1723743);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,0.09483681);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,0.07430798);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,0.0413881);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,0.02074361);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,0.01381174);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,0.008715472);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,0.004197169);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,0.0005716233);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,0.001410315);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,0.1300457);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,0.08252861);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,0.06271778);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,0.04967087);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,0.04016537);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,0.03238634);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,0.02716102);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,0.02221952);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,0.01865189);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,0.01521531);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,0.01243085);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,0.01013953);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,0.008155949);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,0.006053432);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,0.005396145);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,0.004011281);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,0.002864842);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,0.00229589);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,0.001860189);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,0.001267586);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,0.0004309679);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,0.0007139589);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(244817);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_alljet_16->Modified();
   Aplanarity_alljet_16->cd();
   Aplanarity_alljet_16->SetSelected(Aplanarity_alljet_16);
}
