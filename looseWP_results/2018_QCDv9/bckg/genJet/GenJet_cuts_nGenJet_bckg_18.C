#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_bckg_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_bckg_18/GenJet_cuts_nGenJet_bckg_18
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_bckg_18 = new TCanvas("GenJet_cuts_nGenJet_bckg_18", "GenJet_cuts_nGenJet_bckg_18",0,0,600,600);
   GenJet_cuts_nGenJet_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenJet_bckg_18->Range(-4.867058,-1.703646e+11,22.93266,1.249341e+12);
   GenJet_cuts_nGenJet_bckg_18->SetFillColor(0);
   GenJet_cuts_nGenJet_bckg_18->SetFillStyle(4000);
   GenJet_cuts_nGenJet_bckg_18->SetBorderMode(0);
   GenJet_cuts_nGenJet_bckg_18->SetBorderSize(2);
   GenJet_cuts_nGenJet_bckg_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_bckg_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_bckg_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.10737e+12);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",20,-0.5,19.5);
   st_stack_78->SetMinimum(0);
   st_stack_78->SetMaximum(1.10737e+12);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Event/1.0");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,9.191162e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,7.354654e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,3.619066e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,2.474588e+10);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,3.453401e+09);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,4.162254e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,5.779987e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,8281882);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,1218582);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,177864.7);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,27340.74);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(12,3860.744);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(13,514.7793);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(14,72.17392);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(15,13.99041);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(16,0.5988845);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(17,0.6545781);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,1.673418e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,1.46905e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,9.474217e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,1.192785e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,2438141);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,506072.2);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,129573.5);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,32318.89);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,8555.818);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,2335.43);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,883.5279);
   GenJet_cuts_nGenJet_stack_1->SetBinError(12,506.4663);
   GenJet_cuts_nGenJet_stack_1->SetBinError(13,53.76127);
   GenJet_cuts_nGenJet_stack_1->SetBinError(14,15.04314);
   GenJet_cuts_nGenJet_stack_1->SetBinError(15,8.288253);
   GenJet_cuts_nGenJet_stack_1->SetBinError(16,0.4237868);
   GenJet_cuts_nGenJet_stack_1->SetBinError(17,0.6545781);
   GenJet_cuts_nGenJet_stack_1->SetEntries(3.062923e+08);

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
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,953313.6);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,4932227);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,1.239849e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,1.583865e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,1.160531e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,5391036);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,1884675);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,540565.9);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,135687.7);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,30790.08);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,6474.769);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,1273.328);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(13,234.1397);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(14,44.78525);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(15,7.755708);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(16,1.379454);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(17,0.1472546);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,255.192);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,586.9907);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,952.9058);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,1103.43);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,967.1107);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,668.778);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,400.5868);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,215.3928);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,108.5845);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,51.8327);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,23.68515);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,10.69189);
   GenJet_cuts_nGenJet_stack_2->SetBinError(13,4.430639);
   GenJet_cuts_nGenJet_stack_2->SetBinError(14,1.864001);
   GenJet_cuts_nGenJet_stack_2->SetBinError(15,0.8538742);
   GenJet_cuts_nGenJet_stack_2->SetBinError(16,0.346901);
   GenJet_cuts_nGenJet_stack_2->SetBinError(17,0.104127);
   GenJet_cuts_nGenJet_stack_2->SetEntries(8.938066e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenJet_bckg_18->Modified();
   GenJet_cuts_nGenJet_bckg_18->cd();
   GenJet_cuts_nGenJet_bckg_18->SetSelected(GenJet_cuts_nGenJet_bckg_18);
}
