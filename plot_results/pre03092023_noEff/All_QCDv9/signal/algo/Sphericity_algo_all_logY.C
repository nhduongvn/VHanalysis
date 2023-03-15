#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_all_logY()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(-0.2183529,-0.0642374,1.171633,0.4710743);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetLogy();
   Sphericity_algo_all->SetLeftMargin(0.15709);
   Sphericity_algo_all->SetRightMargin(0.1234783);
   Sphericity_algo_all->SetBottomMargin(0.12);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_124 = new TH1F("st_stack_124","",25,0,1);
   st_stack_124->SetMinimum(-2.380814e+09);
   st_stack_124->SetMaximum(-0.4295117);
   st_stack_124->SetDirectory(0);
   st_stack_124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_124->SetLineColor(ci);
   st_stack_124->GetXaxis()->SetTitle("Sphericity");
   st_stack_124->GetXaxis()->SetRange(1,25);
   st_stack_124->GetXaxis()->SetLabelFont(42);
   st_stack_124->GetXaxis()->SetTitleOffset(1);
   st_stack_124->GetXaxis()->SetTitleFont(42);
   st_stack_124->GetYaxis()->SetTitle("Event/0.04");
   st_stack_124->GetYaxis()->SetLabelFont(42);
   st_stack_124->GetYaxis()->SetTitleSize(0.037);
   st_stack_124->GetYaxis()->SetTitleFont(42);
   st_stack_124->GetZaxis()->SetLabelFont(42);
   st_stack_124->GetZaxis()->SetTitleOffset(1);
   st_stack_124->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_124);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,0.01991183);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,0.1197054);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,0.234587);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,0.2847692);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,0.2752272);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,0.2673606);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,0.2723268);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,0.2547324);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,0.2971696);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,0.2299807);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,0.2140764);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,0.186767);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,0.1759017);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,0.1325588);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(15,0.176878);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(16,0.1141079);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,0.09844117);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(18,0.07162734);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(19,0.04608117);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(20,0.01739654);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(21,0.008733424);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(22,0.002977441);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,0.006057453);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,0.01494927);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,0.02096658);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,0.03677708);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,0.02254651);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,0.02306622);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,0.02223794);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,0.02192465);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,0.02346258);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,0.02043454);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,0.02011164);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,0.01822404);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,0.01887325);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,0.0163372);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(15,0.01819548);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(16,0.01463051);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,0.01405421);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(18,0.0111253);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(19,0.009012925);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(20,0.005365105);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(21,0.004001626);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(22,0.002105387);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,0.008463781);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,0.04214807);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,0.07051411);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,0.09855287);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,0.09550438);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,0.1039227);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,0.1043701);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,0.09789962);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,0.1004905);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,0.08141026);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,0.07888214);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,0.071005);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,0.06477865);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,0.05467103);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,0.04459631);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,0.03750825);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,0.03017239);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,0.02297544);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,0.01183752);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(20,0.006408234);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(21,0.001772399);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(22,0.0001954117);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,0.001418345);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,0.003204989);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,0.004011548);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,0.004875282);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,0.00472665);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,0.004957072);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,0.005146354);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,0.005216944);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,0.004888723);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,0.004408277);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,0.004747203);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,0.004162066);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,0.003968518);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,0.003655783);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,0.00376926);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,0.003279078);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.002674705);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.002333581);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.001653841);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(20,0.001280066);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(21,0.0006154982);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(22,0.0001954117);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","ZHcc","F");

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
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
