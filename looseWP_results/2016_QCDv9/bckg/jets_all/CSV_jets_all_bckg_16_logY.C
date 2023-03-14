#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_16_logY()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_16/CSV_jets_all_bckg_16
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_16 = new TCanvas("CSV_jets_all_bckg_16", "CSV_jets_all_bckg_16",0,0,600,600);
   CSV_jets_all_bckg_16->SetHighLightColor(2);
   CSV_jets_all_bckg_16->Range(-0.2183529,-1.826261,1.171633,14.78713);
   CSV_jets_all_bckg_16->SetFillColor(0);
   CSV_jets_all_bckg_16->SetFillStyle(4000);
   CSV_jets_all_bckg_16->SetBorderMode(0);
   CSV_jets_all_bckg_16->SetBorderSize(2);
   CSV_jets_all_bckg_16->SetLogy();
   CSV_jets_all_bckg_16->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_16->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_16->SetBottomMargin(0.12);
   CSV_jets_all_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_16->SetFrameBorderMode(0);
   CSV_jets_all_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.022875e+12);
   
   TH1F *st_stack_164 = new TH1F("st_stack_164","",20,0,1);
   st_stack_164->SetMinimum(1.470098);
   st_stack_164->SetMaximum(1.33596e+13);
   st_stack_164->SetDirectory(0);
   st_stack_164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_164->SetLineColor(ci);
   st_stack_164->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_164->GetXaxis()->SetRange(1,20);
   st_stack_164->GetXaxis()->SetLabelFont(42);
   st_stack_164->GetXaxis()->SetTitleOffset(1);
   st_stack_164->GetXaxis()->SetTitleFont(42);
   st_stack_164->GetYaxis()->SetTitle("Event/0.05");
   st_stack_164->GetYaxis()->SetLabelFont(42);
   st_stack_164->GetYaxis()->SetTitleSize(0.037);
   st_stack_164->GetYaxis()->SetTitleFont(42);
   st_stack_164->GetZaxis()->SetLabelFont(42);
   st_stack_164->GetZaxis()->SetTitleOffset(1);
   st_stack_164->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_164);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,3.338859e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1.356616e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,1.744384e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,7.488551e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,4.509164e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,2.822187e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,2.030535e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,1.513788e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.142199e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,9.16034e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,7.663149e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,6.308251e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,5.370988e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,4.710577e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,4.307229e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,4.222474e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,4.074803e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,4.419466e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,5.735441e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,2.257477e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.609035e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.671464e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,5.967148e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,3.907238e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,3.032368e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.398636e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,2.034073e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,1.755849e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.524513e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.364662e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.247479e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.130635e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.042617e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,9754974);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,9316656);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,9212895);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,9041584);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,9403062);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.06889e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,2.102539e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.395931e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.276168e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,4.280068e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,8861636);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,4746003);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,3366746);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,2609446);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2201763);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,1938623);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,1731061);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,1614548);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,1544383);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,1478494);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1438927);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1458909);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,1526640);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,1708710);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,1865845);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2268037);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,3412483);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,1.876517e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,2841.774);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,1624.271);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,740.732);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,544.0528);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,458.6562);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,403.7258);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,370.7638);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,347.486);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,327.9406);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,316.5895);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,310.0421);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,303.5497);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,299.4594);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,301.5255);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,308.3739);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,326.1726);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,340.7079);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,375.4561);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,460.4481);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1080.757);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(4.006936e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_bckg_16->Modified();
   CSV_jets_all_bckg_16->cd();
   CSV_jets_all_bckg_16->SetSelected(CSV_jets_all_bckg_16);
}
