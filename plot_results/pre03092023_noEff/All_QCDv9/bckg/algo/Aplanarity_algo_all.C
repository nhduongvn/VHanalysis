#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-437987.1,1.171633,3211905);
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
   st->SetMaximum(2846916);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(0);
   st_stack_128->SetMaximum(2846916);
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
   st_stack_128->GetYaxis()->SetTitle("Events/0.02");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1837619);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,856362.9);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,409790.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,243156.4);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,140883.6);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,73244.58);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,49220.55);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,34394.53);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,20162.13);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,10975.24);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,8948.432);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,8774.093);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,3254.302);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,3039.776);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,3372.626);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,1013.343);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,72.24971);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(18,31.75439);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,320.0472);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(20,314.0145);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,63128.68);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,50379.91);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,44049.55);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,33411.22);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,21562.33);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,7874.587);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,6994.966);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,6893.859);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,4039.127);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,3722.274);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,3376.022);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,3146.784);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,1060.512);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,2000.194);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,2310.763);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,618.9791);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,42.56461);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(18,31.75439);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,320.0472);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(20,314.0145);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(70650);

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
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,60325.4);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,42987.61);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,29037.53);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,20157.71);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,14445.02);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,10510.18);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,7734.796);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,5735.596);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,4263.645);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,3151.843);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,2291.988);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,1675.45);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,1183.459);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,817.8144);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,567.5497);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,367.861);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,231.1717);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,140.4158);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,79.15945);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(20,38.30636);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(21,18.20442);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(22,7.338864);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(23,1.974419);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(24,0.1482809);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,68.73713);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,58.56649);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,48.32355);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,40.08146);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,33.80319);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,28.93915);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,25.40288);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,21.44185);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,18.71029);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,15.95355);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,13.51205);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,11.74877);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,9.699681);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,7.991443);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,6.757898);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,5.397269);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,4.342026);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,3.42449);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,2.508408);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(20,1.721867);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(21,1.244254);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(22,0.7542741);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(23,0.3975944);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(24,0.1063007);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(2980897);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
