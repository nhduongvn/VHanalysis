#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all_logY()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Thu Feb 16 10:37:41 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-1.118093,1.171633,10.67863);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(1.20581e+09);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(1.983875);
   st_stack_192->SetMaximum(3.154707e+09);
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
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,1.1024e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,5340379);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,2785978);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,1536530);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,909427.7);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,539694.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,415267.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,233801.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,200935.2);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,102777.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,79529.99);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,74684.17);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,34990.64);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,18432.62);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,17746.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,6044.476);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,2175.743);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,3898.229);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,2270.691);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(20,392.7199);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(21,62.03478);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,126540.3);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,112827.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,81408.77);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,61554.91);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,38969.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,19259.44);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,43292.26);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,13569.73);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,28529);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,9651.293);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,16465.68);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,24966.96);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,5620.583);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,3486.651);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,4224.791);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,1228.606);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,741.49);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,1566.795);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,885.2385);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(20,316.0169);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(21,46.21151);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(784962);

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
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(0,0.3563127);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,1034095);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,748448.9);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,502179.2);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,344000.5);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,241172.2);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,172199.5);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,123967.9);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,89817.62);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,65352.6);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,47161.85);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,33947.49);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,24069.87);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,16910.46);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,11600.62);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,7816.837);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,5100.929);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,3173.627);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,1869.462);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,1040.389);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,527.981);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,231.3087);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,88.61709);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,22.63921);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(24,3.234179);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(25,0.05997242);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(0,0.1605218);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,291.933);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,248.0741);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,203.7135);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,168.7134);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,141.5092);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,119.6621);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,101.8661);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,86.10829);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,73.59402);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,62.39484);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,53.27513);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,44.3875);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,37.71157);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,31.47149);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,26.19762);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,20.71692);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,16.559);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,12.3359);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,9.711965);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,6.681146);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,4.345469);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,2.640176);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,1.349427);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(24,0.4994131);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(25,0.05997242);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(4.860908e+07);

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
