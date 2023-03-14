#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-351588.6,1.171633,2578317);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLeftMargin(0.15709);
   Aplanarity_algo_all->SetRightMargin(0.1234783);
   Aplanarity_algo_all->SetBottomMargin(0.12);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2285326);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(0);
   st_stack_128->SetMaximum(2285326);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("Aplanarity");
   st_stack_128->GetXaxis()->SetRange(1,50);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Event/0.02");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1836503);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,849534.5);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,440755.5);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,240929.9);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,147937.2);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,73013.15);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,47036.23);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,33724.88);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,20164.56);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,10322);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,8737.977);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,9755.812);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,3035.217);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,3156.077);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,3064.09);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,12463.4);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,69.51674);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(18,32.72318);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,320.0472);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(20,291.7287);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,60492.98);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,47301.8);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,49782.46);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,32507);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,20235.62);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,7287.922);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,6243.535);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,6322.701);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,3691.822);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,3257.345);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,3071.849);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,3172.134);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,995.6095);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,1825.859);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,2060.535);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,11529.2);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,40.87071);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(18,32.72318);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,320.0472);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(20,291.7287);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(72705);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,60317.23);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,43016.95);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,29052.07);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,20168.96);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,14429.67);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,10520.66);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,7739.974);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,5735.147);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,4254.434);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,3151.814);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,2289.998);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,1673.834);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,1190.475);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,817.7979);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,566.2479);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,366.639);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,233.7939);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,140.3885);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,78.71309);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(20,37.64605);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(21,18.52936);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(22,7.345612);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(23,1.974393);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(24,0.141659);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,66.57778);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,56.78117);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,46.89499);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,38.9857);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,32.84895);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,28.24745);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,24.72983);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,20.87638);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,18.16015);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,15.5639);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,13.15105);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,11.4264);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,9.534737);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,7.804905);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,6.604674);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,5.259245);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,4.250955);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,3.337272);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,2.444726);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(20,1.667672);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(21,1.220744);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(22,0.7377849);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(23,0.3919871);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(24,0.10258);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(3202080);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
