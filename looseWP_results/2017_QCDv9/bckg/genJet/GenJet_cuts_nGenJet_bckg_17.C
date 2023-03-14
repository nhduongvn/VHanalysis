#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_bckg_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_bckg_17/GenJet_cuts_nGenJet_bckg_17
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_bckg_17 = new TCanvas("GenJet_cuts_nGenJet_bckg_17", "GenJet_cuts_nGenJet_bckg_17",0,0,600,600);
   GenJet_cuts_nGenJet_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenJet_bckg_17->Range(-4.867058,-1.17854e+11,22.93266,8.642629e+11);
   GenJet_cuts_nGenJet_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenJet_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenJet_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenJet_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenJet_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.660512e+11);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",20,-0.5,19.5);
   st_stack_76->SetMinimum(0);
   st_stack_76->SetMaximum(7.660512e+11);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Event/1.0");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,6.358219e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,5.054536e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,2.492611e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,1.692377e+10);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,2.355732e+09);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,2.819854e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,3.911847e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,5682087);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,839529.9);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,123335.9);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,18196.44);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(12,2364.967);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(13,374.4637);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(14,50.1978);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(15,9.730494);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(16,0.4165312);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(17,0.4552667);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,1.040479e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,9.088305e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,5.890849e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,7528604);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,1598039);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,326219);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,79964.85);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,21937.34);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,6050.777);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,1773.744);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,383.2311);
   GenJet_cuts_nGenJet_stack_1->SetBinError(12,112.1222);
   GenJet_cuts_nGenJet_stack_1->SetBinError(13,40.84157);
   GenJet_cuts_nGenJet_stack_1->SetBinError(14,10.46268);
   GenJet_cuts_nGenJet_stack_1->SetBinError(15,5.764576);
   GenJet_cuts_nGenJet_stack_1->SetBinError(16,0.2947486);
   GenJet_cuts_nGenJet_stack_1->SetBinError(17,0.4552667);
   GenJet_cuts_nGenJet_stack_1->SetEntries(3.028331e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenJet_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_1,"");
   
   TH1D *GenJet_cuts_nGenJet_stack_2 = new TH1D("GenJet_cuts_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,628549.8);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,3287292);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,8362094);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,1.073253e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,7869581);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,3643794);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,1268453);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,361743);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,90355.25);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,20433.04);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,4261.875);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,849.3726);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(13,153.1183);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(14,28.08149);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(15,4.021918);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(16,0.4009601);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(17,0.2621946);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,187.0093);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,434.9483);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,717.1948);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,837.9148);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,737.1638);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,510.3043);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,304.2586);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,163.2708);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,81.85097);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,38.98249);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,17.79083);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,7.967764);
   GenJet_cuts_nGenJet_stack_2->SetBinError(13,3.384161);
   GenJet_cuts_nGenJet_stack_2->SetBinError(14,1.469669);
   GenJet_cuts_nGenJet_stack_2->SetBinError(15,0.5363096);
   GenJet_cuts_nGenJet_stack_2->SetBinError(16,0.1736372);
   GenJet_cuts_nGenJet_stack_2->SetBinError(17,0.1409869);
   GenJet_cuts_nGenJet_stack_2->SetEntries(6.292104e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenJet_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenJet_bckg_17->Modified();
   GenJet_cuts_nGenJet_bckg_17->cd();
   GenJet_cuts_nGenJet_bckg_17->SetSelected(GenJet_cuts_nGenJet_bckg_17);
}
