#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_bckg_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenL_bckg_18/GenJet_all_nGenL_bckg_18
//=========  (Thu Mar  9 15:52:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_bckg_18 = new TCanvas("GenJet_all_nGenL_bckg_18", "GenJet_all_nGenL_bckg_18",0,0,600,600);
   GenJet_all_nGenL_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenL_bckg_18->Range(-4.867058,-2.896801,22.93266,14.20905);
   GenJet_all_nGenL_bckg_18->SetFillColor(0);
   GenJet_all_nGenL_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenL_bckg_18->SetBorderMode(0);
   GenJet_all_nGenL_bckg_18->SetBorderSize(2);
   GenJet_all_nGenL_bckg_18->SetLogy();
   GenJet_all_nGenL_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenL_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenL_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(9.285669e+11);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",20,-0.5,19.5);
   st_stack_12->SetMinimum(0.1431863);
   st_stack_12->SetMaximum(3.15115e+12);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Event/1.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,7.087325e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(2,7.707067e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(3,3.798131e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(4,1.336122e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(5,3.869289e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(6,1.017733e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(7,2.57283e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(8,6.373454e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(9,1.559562e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(10,3.657066e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(11,8573660);
   GenJet_all_nGenL_stack_1->SetBinContent(12,1856067);
   GenJet_all_nGenL_stack_1->SetBinContent(13,422482.7);
   GenJet_all_nGenL_stack_1->SetBinContent(14,78911.11);
   GenJet_all_nGenL_stack_1->SetBinContent(15,4784.941);
   GenJet_all_nGenL_stack_1->SetBinContent(16,43.73764);
   GenJet_all_nGenL_stack_1->SetBinError(1,1.425081e+08);
   GenJet_all_nGenL_stack_1->SetBinError(2,1.474176e+08);
   GenJet_all_nGenL_stack_1->SetBinError(3,1.027315e+08);
   GenJet_all_nGenL_stack_1->SetBinError(4,6.029161e+07);
   GenJet_all_nGenL_stack_1->SetBinError(5,3.229828e+07);
   GenJet_all_nGenL_stack_1->SetBinError(6,1.670982e+07);
   GenJet_all_nGenL_stack_1->SetBinError(7,8210693);
   GenJet_all_nGenL_stack_1->SetBinError(8,4272589);
   GenJet_all_nGenL_stack_1->SetBinError(9,2002572);
   GenJet_all_nGenL_stack_1->SetBinError(10,927593.6);
   GenJet_all_nGenL_stack_1->SetBinError(11,534045.4);
   GenJet_all_nGenL_stack_1->SetBinError(12,197858.8);
   GenJet_all_nGenL_stack_1->SetBinError(13,101688.1);
   GenJet_all_nGenL_stack_1->SetBinError(14,38836.24);
   GenJet_all_nGenL_stack_1->SetBinError(15,2505.388);
   GenJet_all_nGenL_stack_1->SetBinError(16,33.29673);
   GenJet_all_nGenL_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenL_stack_1->SetFillColor(ci);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_1,"");
   
   TH1D *GenJet_all_nGenL_stack_2 = new TH1D("GenJet_all_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_2->SetBinContent(1,336985.2);
   GenJet_all_nGenL_stack_2->SetBinContent(2,3827492);
   GenJet_all_nGenL_stack_2->SetBinContent(3,1.328236e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(4,1.657581e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(5,1.138331e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(6,5377945);
   GenJet_all_nGenL_stack_2->SetBinContent(7,2019445);
   GenJet_all_nGenL_stack_2->SetBinContent(8,653626.4);
   GenJet_all_nGenL_stack_2->SetBinContent(9,191258.1);
   GenJet_all_nGenL_stack_2->SetBinContent(10,52290.34);
   GenJet_all_nGenL_stack_2->SetBinContent(11,13565.67);
   GenJet_all_nGenL_stack_2->SetBinContent(12,3392.544);
   GenJet_all_nGenL_stack_2->SetBinContent(13,836.6511);
   GenJet_all_nGenL_stack_2->SetBinContent(14,197.1284);
   GenJet_all_nGenL_stack_2->SetBinContent(15,45.48306);
   GenJet_all_nGenL_stack_2->SetBinContent(16,11.05139);
   GenJet_all_nGenL_stack_2->SetBinContent(17,2.141332);
   GenJet_all_nGenL_stack_2->SetBinContent(18,0.5637975);
   GenJet_all_nGenL_stack_2->SetBinContent(19,0.1873183);
   GenJet_all_nGenL_stack_2->SetBinContent(21,0.08328724);
   GenJet_all_nGenL_stack_2->SetBinError(1,151.357);
   GenJet_all_nGenL_stack_2->SetBinError(2,517.1585);
   GenJet_all_nGenL_stack_2->SetBinError(3,985.828);
   GenJet_all_nGenL_stack_2->SetBinError(4,1136.717);
   GenJet_all_nGenL_stack_2->SetBinError(5,965.2866);
   GenJet_all_nGenL_stack_2->SetBinError(6,673.0825);
   GenJet_all_nGenL_stack_2->SetBinError(7,415.5158);
   GenJet_all_nGenL_stack_2->SetBinError(8,237.5374);
   GenJet_all_nGenL_stack_2->SetBinError(9,129.5338);
   GenJet_all_nGenL_stack_2->SetBinError(10,68.09713);
   GenJet_all_nGenL_stack_2->SetBinError(11,34.7269);
   GenJet_all_nGenL_stack_2->SetBinError(12,16.80603);
   GenJet_all_nGenL_stack_2->SetBinError(13,8.516449);
   GenJet_all_nGenL_stack_2->SetBinError(14,4.39067);
   GenJet_all_nGenL_stack_2->SetBinError(15,1.869761);
   GenJet_all_nGenL_stack_2->SetBinError(16,0.9143932);
   GenJet_all_nGenL_stack_2->SetBinError(17,0.3821133);
   GenJet_all_nGenL_stack_2->SetBinError(18,0.2202244);
   GenJet_all_nGenL_stack_2->SetBinError(19,0.1107545);
   GenJet_all_nGenL_stack_2->SetBinError(21,0.08328724);
   GenJet_all_nGenL_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenL_stack_2->SetFillColor(ci);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenL_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenL_bckg_18->Modified();
   GenJet_all_nGenL_bckg_18->cd();
   GenJet_all_nGenL_bckg_18->SetSelected(GenJet_all_nGenL_bckg_18);
}
