#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Feb 16 10:37:41 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,-1.01519,1.171633,10.10434);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.901985e+08);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(2.085226);
   st_stack_190->SetMaximum(9.826201e+08);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("Aplanarity");
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,3569404);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1776712);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,928318.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,547841.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,329870.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,174456.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,146365.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,70045.79);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,89307.39);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,31635.16);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,34285.93);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,14989.91);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,8217.104);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,5588.809);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,4561.341);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,2359.428);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,495.7042);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,1397.922);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,1018.555);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,42.57848);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,20.73763);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,68841.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,63313.58);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,36560.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,40181.64);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,25126.49);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,9621.451);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,25258.47);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,6039.812);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,26922.71);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,4257.281);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,15277.71);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,3229.394);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,1725.16);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,1853.835);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,1981.541);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,746.599);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,290.8097);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,604.1452);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,538.4105);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,29.48855);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,20.73763);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(271661);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.08987177);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,332580.5);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,243523.5);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,164050.1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,112582.3);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,79079.48);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,56513.53);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,40669.95);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,29414.62);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,21479.06);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,15527.72);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,11148.85);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,7939.732);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,5556.619);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,3813.409);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,2567.207);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,1681.219);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,1035.717);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,612.6197);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,344.8243);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,175.4386);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,77.59744);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,31.12495);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,8.176758);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,1.562386);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.08987177);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,158.4881);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,136.5038);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,112.335);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,93.19567);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,78.17493);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,66.15412);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,56.14417);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,47.77079);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,40.84758);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,34.74296);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,29.45624);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,24.86865);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,20.80847);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,17.24989);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,14.17292);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,11.44643);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,8.994144);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,6.914341);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,5.201231);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,3.689632);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,2.477188);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.559821);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.7976528);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.3552921);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(1.622886e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
