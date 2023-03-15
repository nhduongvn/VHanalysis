#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2183529,-0.4986797,1.171633,7.334489);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15709);
   Sphericity_both_18->SetRightMargin(0.1234783);
   Sphericity_both_18->SetBottomMargin(0.12);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1737195);
   
   TH1F *st_stack_187 = new TH1F("st_stack_187","",25,0,1);
   st_stack_187->SetMinimum(2.762489);
   st_stack_187->SetMaximum(3557723);
   st_stack_187->SetDirectory(0);
   st_stack_187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_187->SetLineColor(ci);
   st_stack_187->GetXaxis()->SetTitle("Sphericity");
   st_stack_187->GetXaxis()->SetRange(1,25);
   st_stack_187->GetXaxis()->SetLabelFont(42);
   st_stack_187->GetXaxis()->SetTitleOffset(1);
   st_stack_187->GetXaxis()->SetTitleFont(42);
   st_stack_187->GetYaxis()->SetTitle("Event/0.04");
   st_stack_187->GetYaxis()->SetLabelFont(42);
   st_stack_187->GetYaxis()->SetTitleSize(0.037);
   st_stack_187->GetYaxis()->SetTitleFont(42);
   st_stack_187->GetZaxis()->SetLabelFont(42);
   st_stack_187->GetZaxis()->SetTitleOffset(1);
   st_stack_187->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_187);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,484746.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,1072781);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,1307524);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,1239827);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,995639.3);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,949161.6);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,716467.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,558653.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,501029.4);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,413456.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,414904.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,411231.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,261265.3);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,240339.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,180449.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,146925.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,137367.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,106064);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,39316.53);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,18852.87);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,7680.614);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,493.7843);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,471.2148);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,13976.23);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,40618.08);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,54340.4);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,68117.08);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,47737.35);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,58752.58);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,33439.28);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,29204.04);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,19233.12);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,16738.02);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,35690.29);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,52229.32);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,13272.02);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,13464.05);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,10709.7);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,9925.84);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,31007.1);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,25120.13);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,4704.569);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,3885.098);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,2307.093);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,131.7075);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,371.2289);
   VbbHcc_both_Sphericity_stack_1->SetEntries(271342);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,37062.41);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,100666.7);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,134348.3);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,142623);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,138409.2);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,129617.5);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,119625.4);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,109573.3);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,100191);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,90908.34);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,82223.29);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,73795.87);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,65708.89);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,57676.54);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,49634.7);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,41482.55);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,33136);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,24782.06);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,16080.35);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,8241.537);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,3573.204);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,1321.721);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,337.1851);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(24,50.77376);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,1.588615);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,56.57799);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,92.59703);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,107.432);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,110.5874);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,108.8199);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,105.124);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,100.8879);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,96.94626);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,91.92524);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,87.90307);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,84.08862);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,79.10271);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,74.73125);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,70.51129);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,65.66393);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,59.13583);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,52.90174);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,46.2582);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,37.62614);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,27.06936);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,17.41245);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,10.43744);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,5.379228);
   VbbHcc_both_Sphericity_stack_2->SetBinError(24,1.985832);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.3412746);
   VbbHcc_both_Sphericity_stack_2->SetEntries(2.286567e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
