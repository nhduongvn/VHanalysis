#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Wed Jan 18 11:43:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-2.284474e+07,1.171633,1.675281e+08);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetLeftMargin(0.15709);
   Aplanarity_tags_all->SetRightMargin(0.1234783);
   Aplanarity_tags_all->SetBottomMargin(0.12);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.484908e+08);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(1.484908e+08);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("Aplanarity");
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,9.602921e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,4.741047e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,2.460421e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,1.386189e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,7839765);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,5057440);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,3557196);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,2148092);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,1416574);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,885837.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,846445.7);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,431677.7);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,322835.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,186450.5);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,100397.9);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,111265.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,60396.02);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,12915.48);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,36157.64);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(20,4740.678);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(21,2965.464);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,822293.2);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,659631);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,473728.3);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,360721.7);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,257186.8);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,210492.4);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,187635);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,138965);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,113208.5);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,78151.51);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,97866.62);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,61895.19);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,54694.09);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,39877.74);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,24983.26);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,35868.26);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,28006.77);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,3816.017);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,29336.25);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(20,2513.21);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(21,2471.144);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(1500103);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(0,0.6676854);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2964674);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,2087005);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,1392285);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,955947.2);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,671759.5);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,479901);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,346057.3);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,250910.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,181798.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,131244.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,94262.02);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,66812.29);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,46793.63);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,32024.38);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,21449.89);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,13910.2);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,8669.903);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,5118.095);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,2840.093);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,1426.849);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(21,624.3905);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(22,234.8737);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(23,61.87597);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(24,10.13314);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(25,0.2860351);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(0,0.2324051);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,503.104);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,423.1379);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,346.0838);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,287.5426);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,241.195);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,204.0492);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,173.201);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,147.5468);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,125.4768);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,106.5748);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,90.52239);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,75.91401);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,64.18589);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,53.03284);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,43.53901);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,35.02619);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,27.66074);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,21.3233);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,15.36251);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,11.08215);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(21,7.15948);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(22,4.413165);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(23,2.255311);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(24,0.9082815);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(25,0.1436183);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(1.337714e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
