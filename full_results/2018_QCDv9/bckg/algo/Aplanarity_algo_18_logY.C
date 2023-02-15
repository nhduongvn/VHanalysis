#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Feb 14 16:02:03 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-1.034611,1.171633,10.21222);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15709);
   Aplanarity_algo_18->SetRightMargin(0.1234783);
   Aplanarity_algo_18->SetBottomMargin(0.12);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.822492e+08);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(2.065418);
   st_stack_127->SetMaximum(1.2233e+09);
   st_stack_127->SetDirectory(0);
   st_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_127->SetLineColor(ci);
   st_stack_127->GetXaxis()->SetTitle("Aplanarity");
   st_stack_127->GetXaxis()->SetRange(1,50);
   st_stack_127->GetXaxis()->SetLabelFont(42);
   st_stack_127->GetXaxis()->SetTitleOffset(1);
   st_stack_127->GetXaxis()->SetTitleFont(42);
   st_stack_127->GetYaxis()->SetTitle("Events/0.02");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetTitleOffset(1);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,4767911);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,1749633);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,948837.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,567313.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,245707.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,200071.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,180626);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,53834.52);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,45942.74);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,16543.36);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,9696.206);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,8480.824);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,12049.33);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,8522.866);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,3327.879);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,3184.266);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,3017.887);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,1371.071);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,196792);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,120501.9);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,94868.28);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,77658.82);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,46217.18);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,51008.91);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,47236.17);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,10682.57);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,25348.94);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,4956.782);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,3460.974);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,3668.031);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,4584.028);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,4587.462);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2560.02);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,2362.578);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,2979.922);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,1371.071);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(36309);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,54581.24);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,40289.79);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,27510.81);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,19316.07);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,13813.71);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10025.5);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,7365.677);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,5428.048);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,3972.099);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,2915.012);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,2112.25);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,1524.903);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,1064.629);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,731.1088);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,501.0758);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,322.8596);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,202.6901);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,119.9396);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,66.96614);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,33.95428);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,13.8292);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,6.157065);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,1.732542);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,70.35316);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,60.58514);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,50.25451);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,41.92476);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,35.7531);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,30.46419);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,26.19284);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,21.98222);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,18.86322);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,16.1739);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,13.6223);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,11.87293);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,9.677764);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,7.949332);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,6.678662);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,5.326285);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,4.356579);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,3.287901);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,2.572965);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.719756);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,1.117277);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.7224419);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.3829703);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2592187);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
