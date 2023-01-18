#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Wed Jan 18 11:43:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-2.345781e+07,1.171633,1.72024e+08);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLeftMargin(0.15709);
   Aplanarity_both_all->SetRightMargin(0.1234783);
   Aplanarity_both_all->SetBottomMargin(0.12);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.524758e+08);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(0);
   st_stack_192->SetMaximum(1.524758e+08);
   st_stack_192->SetDirectory(0);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->GetXaxis()->SetTitle("Aplanarity");
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,9.853949e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,4.860564e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,2.524161e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,1.428311e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,8084742);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,5178583);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,3630478);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,2184397);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,1445899);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,923391.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,861051.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,439331.2);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,325608.7);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,189569.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,101262.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,114741.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,60571.79);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,13031.2);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,36195.42);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(20,4779.226);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(21,3003.599);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,831560.8);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,666100.3);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,478866.8);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,366479.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,261223.2);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,212274.3);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,188250.7);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,139083.2);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,113322.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,80734.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,97944.59);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,61950.31);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,54701.45);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,39929.94);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,24986.61);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,35931.84);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,28006.83);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,3816.365);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,29336.26);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(20,2513.312);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(21,2471.246);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(1578555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(0,0.8513491);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,3111035);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,2178673);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,1451075);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,995169.5);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,698853.3);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,498873.8);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,359519.5);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,260597.1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,188728.6);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,136212.1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,97749.92);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,69274.01);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,48484.21);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,33175.85);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,22212.03);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,14410.57);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,8969.103);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,5299.632);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,2940.653);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,1474.914);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,646.7725);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,243.3668);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,64.41124);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(24,10.65017);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(25,0.2860351);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(0,0.296217);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,515.4597);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,432.2184);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,353.2539);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,293.3679);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,245.9444);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,208.0879);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,176.5196);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,150.3439);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,127.7788);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,108.5905);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,92.14272);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,77.26355);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,65.29659);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,53.93793);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,44.25954);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,35.60617);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,28.10916);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,21.66328);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,15.63085);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,11.26059);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,7.2857);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,4.48988);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,2.300055);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(24,0.9326477);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(25,0.1436183);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(1.396506e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","QCD","F");

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
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
