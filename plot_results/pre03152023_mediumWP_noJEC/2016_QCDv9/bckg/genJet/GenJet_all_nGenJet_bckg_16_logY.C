#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_bckg_16/GenJet_all_nGenJet_bckg_16
//=========  (Thu Mar  9 15:52:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_bckg_16 = new TCanvas("GenJet_all_nGenJet_bckg_16", "GenJet_all_nGenJet_bckg_16",0,0,600,600);
   GenJet_all_nGenJet_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenJet_bckg_16->Range(-4.867058,-2.817955,22.93266,13.73758);
   GenJet_all_nGenJet_bckg_16->SetFillColor(0);
   GenJet_all_nGenJet_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenJet_bckg_16->SetBorderMode(0);
   GenJet_all_nGenJet_bckg_16->SetBorderSize(2);
   GenJet_all_nGenJet_bckg_16->SetLogy();
   GenJet_all_nGenJet_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenJet_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenJet_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(3.64661e+11);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",20,-0.5,19.5);
   st_stack_2->SetMinimum(0.1474721);
   st_stack_2->SetMaximum(1.207895e+12);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Event/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,32747.32);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,4.742385e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,1.18155e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,2.79533e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,3.026678e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,2.110782e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,1.207668e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,6.276548e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,3.08916e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,1.460916e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,6.73342e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,3.023059e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,1.327088e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,5.694619e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,2.412664e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,1.027988e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,4.300481e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,1.762623e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,6184600);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,2385750);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,1563074);
   GenJet_all_nGenJet_stack_1->SetBinError(1,24685.86);
   GenJet_all_nGenJet_stack_1->SetBinError(2,1028060);
   GenJet_all_nGenJet_stack_1->SetBinError(3,5.050705e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(4,7.751256e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(5,7.995748e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(6,6.587215e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(7,4.902525e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(8,3.476772e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(9,2.402757e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(10,1.630498e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(11,1.094746e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(12,7265574);
   GenJet_all_nGenJet_stack_1->SetBinError(13,4769613);
   GenJet_all_nGenJet_stack_1->SetBinError(14,3100065);
   GenJet_all_nGenJet_stack_1->SetBinError(15,2002389);
   GenJet_all_nGenJet_stack_1->SetBinError(16,1306505);
   GenJet_all_nGenJet_stack_1->SetBinError(17,842431.9);
   GenJet_all_nGenJet_stack_1->SetBinError(18,537902.6);
   GenJet_all_nGenJet_stack_1->SetBinError(19,304069.5);
   GenJet_all_nGenJet_stack_1->SetBinError(20,190675.7);
   GenJet_all_nGenJet_stack_1->SetBinError(21,155717);
   GenJet_all_nGenJet_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenJet_stack_1->SetFillColor(ci);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_1,"");
   
   TH1D *GenJet_all_nGenJet_stack_2 = new TH1D("GenJet_all_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(1,2.632514);
   GenJet_all_nGenJet_stack_2->SetBinContent(2,311.1671);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,10582.18);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,137140);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,806939.1);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,2429531);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,4396652);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,5506438);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,5331816);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,4272982);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,2966424);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,1846570);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1055900);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,564255.1);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,286117.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,138568);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,64599.44);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,29041.14);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,12733);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,5423.57);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,3813.277);
   GenJet_all_nGenJet_stack_2->SetBinError(1,0.3361347);
   GenJet_all_nGenJet_stack_2->SetBinError(2,3.685643);
   GenJet_all_nGenJet_stack_2->SetBinError(3,21.70877);
   GenJet_all_nGenJet_stack_2->SetBinError(4,79.65855);
   GenJet_all_nGenJet_stack_2->SetBinError(5,199.7536);
   GenJet_all_nGenJet_stack_2->SetBinError(6,362.8241);
   GenJet_all_nGenJet_stack_2->SetBinError(7,509.0561);
   GenJet_all_nGenJet_stack_2->SetBinError(8,584.3849);
   GenJet_all_nGenJet_stack_2->SetBinError(9,584.505);
   GenJet_all_nGenJet_stack_2->SetBinError(10,528.9834);
   GenJet_all_nGenJet_stack_2->SetBinError(11,444.0166);
   GenJet_all_nGenJet_stack_2->SetBinError(12,352.1233);
   GenJet_all_nGenJet_stack_2->SetBinError(13,267.2261);
   GenJet_all_nGenJet_stack_2->SetBinError(14,195.8829);
   GenJet_all_nGenJet_stack_2->SetBinError(15,139.7633);
   GenJet_all_nGenJet_stack_2->SetBinError(16,97.4141);
   GenJet_all_nGenJet_stack_2->SetBinError(17,66.58648);
   GenJet_all_nGenJet_stack_2->SetBinError(18,44.70059);
   GenJet_all_nGenJet_stack_2->SetBinError(19,29.63224);
   GenJet_all_nGenJet_stack_2->SetBinError(20,19.35909);
   GenJet_all_nGenJet_stack_2->SetBinError(21,16.25275);
   GenJet_all_nGenJet_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenJet_stack_2->SetFillColor(ci);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenJet_stack_1","QCD","F");

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
   GenJet_all_nGenJet_bckg_16->Modified();
   GenJet_all_nGenJet_bckg_16->cd();
   GenJet_all_nGenJet_bckg_16->SetSelected(GenJet_all_nGenJet_bckg_16);
}
