#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all_logY()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Tue Feb 14 10:43:09 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,0.2329344,1.171633,3.841738);
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
   st->SetMaximum(2068.136);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(4.634372);
   st_stack_192->SetMaximum(3025.923);
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
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,15.32537);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,10.86615);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,7.496942);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,5.172578);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,3.729781);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,2.681965);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,1.84439);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,1.44712);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,0.9768068);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,0.7218539);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,0.5262473);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,0.4201592);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,0.3104552);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,0.2292956);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,0.1045615);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,0.0708814);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,0.04068017);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,0.02793127);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,0.01844653);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(20,0.01463072);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(21,0.005316553);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(22,0.003338416);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,0.2030951);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,0.169913);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,0.1379479);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,0.1141455);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,0.09830058);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,0.08262075);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,0.06840149);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,0.06323997);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,0.05025748);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,0.04235554);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,0.03612154);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,0.03236004);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,0.02862985);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,0.02463598);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,0.01533992);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,0.01386569);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,0.00952954);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,0.008055046);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,0.006798624);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(20,0.006122019);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(21,0.003771464);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(22,0.002411948);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(23382);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,5.355999);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,3.663104);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,2.375884);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,1.595821);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,1.065755);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,0.7572888);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,0.50837);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,0.3681);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,0.2382934);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,0.1583148);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,0.1226737);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,0.07378678);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,0.05423892);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,0.02597626);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,0.02231506);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,0.01010668);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.006221514);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,0.003009933);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,0.004084832);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,0.0008124419);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,0.0009943392);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,0.04415764);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,0.03731373);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,0.02814036);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,0.02290473);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,0.01902744);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,0.01564046);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,0.01291336);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,0.01208535);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,0.008749727);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,0.007396746);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,0.007192729);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,0.00544385);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.004244839);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.002818177);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.002705946);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.001788343);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.00141405);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,0.0009596583);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.001177916);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.0005150179);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,0.0005583203);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(54951);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","ZHcc","F");

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
