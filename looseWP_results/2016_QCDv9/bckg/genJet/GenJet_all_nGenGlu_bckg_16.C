#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_bckg_16()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_bckg_16/GenJet_all_nGenGlu_bckg_16
//=========  (Fri Mar 10 12:49:28 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_bckg_16 = new TCanvas("GenJet_all_nGenGlu_bckg_16", "GenJet_all_nGenGlu_bckg_16",0,0,600,600);
   GenJet_all_nGenGlu_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenGlu_bckg_16->Range(-4.867058,-5.551486e+10,22.93266,4.07109e+11);
   GenJet_all_nGenGlu_bckg_16->SetFillColor(0);
   GenJet_all_nGenGlu_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenGlu_bckg_16->SetBorderMode(0);
   GenJet_all_nGenGlu_bckg_16->SetBorderSize(2);
   GenJet_all_nGenGlu_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.608466e+11);
   
   TH1F *st_stack_26 = new TH1F("st_stack_26","",20,-0.5,19.5);
   st_stack_26->SetMinimum(0);
   st_stack_26->SetMaximum(3.608466e+11);
   st_stack_26->SetDirectory(0);
   st_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_26->SetLineColor(ci);
   st_stack_26->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_26->GetXaxis()->SetLabelFont(42);
   st_stack_26->GetXaxis()->SetTitleOffset(1);
   st_stack_26->GetXaxis()->SetTitleFont(42);
   st_stack_26->GetYaxis()->SetTitle("Event/1.0");
   st_stack_26->GetYaxis()->SetLabelFont(42);
   st_stack_26->GetYaxis()->SetTitleSize(0.037);
   st_stack_26->GetYaxis()->SetTitleFont(42);
   st_stack_26->GetZaxis()->SetLabelFont(42);
   st_stack_26->GetZaxis()->SetTitleOffset(1);
   st_stack_26->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_26);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,4.028572e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,1.622768e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,2.870783e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,2.994978e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,2.023443e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,9.854174e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,4.025989e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,1.48181e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,5.08342e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,1.653457e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,5.216352e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,1.557222e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,4.594892e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,1.318073e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(15,3179478);
   GenJet_all_nGenGlu_stack_1->SetBinContent(16,722774.3);
   GenJet_all_nGenGlu_stack_1->SetBinContent(17,233842.2);
   GenJet_all_nGenGlu_stack_1->SetBinContent(18,24690.62);
   GenJet_all_nGenGlu_stack_1->SetBinContent(19,15811.76);
   GenJet_all_nGenGlu_stack_1->SetBinContent(20,2156.585);
   GenJet_all_nGenGlu_stack_1->SetBinContent(21,457.3563);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,2.923433e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,5.879424e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,7.813191e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,7.944409e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,6.465341e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,4.438361e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,2.777822e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,1.645445e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,9392558);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,5220581);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,2862366);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,1523749);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,810284.5);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,423860.2);
   GenJet_all_nGenGlu_stack_1->SetBinError(15,193401.6);
   GenJet_all_nGenGlu_stack_1->SetBinError(16,83930.02);
   GenJet_all_nGenGlu_stack_1->SetBinError(17,51745.21);
   GenJet_all_nGenGlu_stack_1->SetBinError(18,3402.898);
   GenJet_all_nGenGlu_stack_1->SetBinError(19,4169.411);
   GenJet_all_nGenGlu_stack_1->SetBinError(20,691.4767);
   GenJet_all_nGenGlu_stack_1->SetBinError(21,302.3748);
   GenJet_all_nGenGlu_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_1,"");
   
   TH1D *GenJet_all_nGenGlu_stack_2 = new TH1D("GenJet_all_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,4955259);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,8192113);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,7359208);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,4823181);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,2574474);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,1187681);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,490957.7);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,186354.7);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,65853.75);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,22022.21);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,6968.904);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,2145.556);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,625.355);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,174.8844);
   GenJet_all_nGenGlu_stack_2->SetBinContent(15,45.59437);
   GenJet_all_nGenGlu_stack_2->SetBinContent(16,13.49396);
   GenJet_all_nGenGlu_stack_2->SetBinContent(17,4.198234);
   GenJet_all_nGenGlu_stack_2->SetBinContent(18,0.8580327);
   GenJet_all_nGenGlu_stack_2->SetBinContent(19,0.04600009);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,551.6002);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,711.7439);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,675.9393);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,547.7155);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,400.2453);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,271.8176);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,174.6779);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,107.5422);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,63.87275);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,36.89971);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,20.75165);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,11.4858);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,6.193426);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,3.275393);
   GenJet_all_nGenGlu_stack_2->SetBinError(15,1.675534);
   GenJet_all_nGenGlu_stack_2->SetBinError(16,0.9062078);
   GenJet_all_nGenGlu_stack_2->SetBinError(17,0.5143469);
   GenJet_all_nGenGlu_stack_2->SetBinError(18,0.228447);
   GenJet_all_nGenGlu_stack_2->SetBinError(19,0.04600009);
   GenJet_all_nGenGlu_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenGlu_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenGlu_stack_1","QCD","F");

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
   GenJet_all_nGenGlu_bckg_16->Modified();
   GenJet_all_nGenGlu_bckg_16->cd();
   GenJet_all_nGenGlu_bckg_16->SetSelected(GenJet_all_nGenGlu_bckg_16);
}
