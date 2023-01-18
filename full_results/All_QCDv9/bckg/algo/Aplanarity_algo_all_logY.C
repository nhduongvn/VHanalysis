#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-1.126413,1.171633,10.72535);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(1.321829e+09);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(1.976055);
   st_stack_128->SetMaximum(3.468791e+09);
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
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1.309085e+07);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,5987392);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,3026369);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,1577186);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,1018369);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,635963.9);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,480300.4);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,282868.5);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,130726.3);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,85181.11);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,58024.8);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,46134.86);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,48623.83);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,18848.22);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,9896.414);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,29801.05);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,385.2611);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(18,2928.514);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,1502.405);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(20,324.1869);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(21,394.3944);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,303375.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,235847.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,173505.9);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,126717.1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,104758.2);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,79337.1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,78945.86);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,61040.71);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,30899.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,28278.35);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,25190.01);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,23573.35);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,23378.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,5682.292);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,4202.731);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,18664.03);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,359.0568);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(18,2557.43);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,1214.003);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(20,324.1869);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(21,394.3944);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(113207);

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
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,127438.6);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,94105.96);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,63907.44);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,44622.77);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,31894.82);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,23034.59);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,16878.29);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,12386.37);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,9093.394);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,6624.941);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,4820.607);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,3459.015);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,2425.195);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,1677.093);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,1132.615);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,728.9428);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,462.9254);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,271.2543);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,151.865);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(20,74.95977);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(21,32.32418);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(22,12.78147);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(23,4.067249);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(24,0.4334417);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,100.7259);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,87.31453);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,72.46274);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,60.39967);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,51.28325);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,43.5931);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,37.28609);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,31.66627);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,27.39227);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,23.25965);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,19.81021);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,17.00554);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,14.10283);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,11.64591);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,9.684465);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,7.693927);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,6.252704);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,4.741541);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,3.641406);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(20,2.460077);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(21,1.628301);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(22,1.025334);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(23,0.5783233);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(24,0.1694025);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(6476475);

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
