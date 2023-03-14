#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_bckg_17_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_bckg_17/GenJet_all_nGenJet_bckg_17
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_bckg_17 = new TCanvas("GenJet_all_nGenJet_bckg_17", "GenJet_all_nGenJet_bckg_17",0,0,600,600);
   GenJet_all_nGenJet_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenJet_bckg_17->Range(-4.867058,-2.83508,22.93266,13.83977);
   GenJet_all_nGenJet_bckg_17->SetFillColor(0);
   GenJet_all_nGenJet_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenJet_bckg_17->SetBorderMode(0);
   GenJet_all_nGenJet_bckg_17->SetBorderSize(2);
   GenJet_all_nGenJet_bckg_17->SetLogy();
   GenJet_all_nGenJet_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenJet_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(4.465264e+11);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",20,-0.5,19.5);
   st_stack_4->SetMinimum(0.1465218);
   st_stack_4->SetMaximum(1.486919e+12);
   st_stack_4->SetDirectory(0);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Event/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetTitleSize(0.037);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,86402.22);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,5.923324e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,1.440919e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,3.414948e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,3.70616e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,2.585533e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,1.479845e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,7.69412e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,3.782755e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,1.78617e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,8.209136e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,3.685734e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,1.621178e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,6.965465e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,2.93538e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,1.234288e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,5.123484e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,1.989735e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,7975066);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,2942872);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,2011870);
   GenJet_all_nGenJet_stack_1->SetBinError(1,39058.23);
   GenJet_all_nGenJet_stack_1->SetBinError(2,1009486);
   GenJet_all_nGenJet_stack_1->SetBinError(3,4.892391e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(4,7.520072e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(5,7.770174e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(6,6.405823e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(7,4.771476e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(8,3.386904e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(9,2.340547e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(10,1.588197e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(11,1.065077e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(12,7070004);
   GenJet_all_nGenJet_stack_1->SetBinError(13,4651555);
   GenJet_all_nGenJet_stack_1->SetBinError(14,3024073);
   GenJet_all_nGenJet_stack_1->SetBinError(15,1950066);
   GenJet_all_nGenJet_stack_1->SetBinError(16,1260288);
   GenJet_all_nGenJet_stack_1->SetBinError(17,804420.9);
   GenJet_all_nGenJet_stack_1->SetBinError(18,498410.5);
   GenJet_all_nGenJet_stack_1->SetBinError(19,311656.8);
   GenJet_all_nGenJet_stack_1->SetBinError(20,185763.8);
   GenJet_all_nGenJet_stack_1->SetBinError(21,155624.9);
   GenJet_all_nGenJet_stack_1->SetEntries(3.028331e+08);

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
   GenJet_all_nGenJet_stack_2->SetBinContent(1,2.859423);
   GenJet_all_nGenJet_stack_2->SetBinContent(2,372.0113);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,12888.17);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,166319.9);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,979123.6);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,2950508);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,5344208);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,6692619);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,6479823);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,5188890);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,3599696);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,2238992);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1279873);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,683673.9);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,346005);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,167356.1);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,78113.02);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,35170.41);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,15357.86);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,6568.653);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,4561.114);
   GenJet_all_nGenJet_stack_2->SetBinError(1,0.3418158);
   GenJet_all_nGenJet_stack_2->SetBinError(2,3.933738);
   GenJet_all_nGenJet_stack_2->SetBinError(3,23.52325);
   GenJet_all_nGenJet_stack_2->SetBinError(4,86.62259);
   GenJet_all_nGenJet_stack_2->SetBinError(5,219.2833);
   GenJet_all_nGenJet_stack_2->SetBinError(6,402.8347);
   GenJet_all_nGenJet_stack_2->SetBinError(7,570.6105);
   GenJet_all_nGenJet_stack_2->SetBinError(8,658.3059);
   GenJet_all_nGenJet_stack_2->SetBinError(9,660.3894);
   GenJet_all_nGenJet_stack_2->SetBinError(10,598.5642);
   GenJet_all_nGenJet_stack_2->SetBinError(11,502.8475);
   GenJet_all_nGenJet_stack_2->SetBinError(12,398.9428);
   GenJet_all_nGenJet_stack_2->SetBinError(13,302.8827);
   GenJet_all_nGenJet_stack_2->SetBinError(14,222.0311);
   GenJet_all_nGenJet_stack_2->SetBinError(15,158.3403);
   GenJet_all_nGenJet_stack_2->SetBinError(16,110.3211);
   GenJet_all_nGenJet_stack_2->SetBinError(17,75.45893);
   GenJet_all_nGenJet_stack_2->SetBinError(18,50.70506);
   GenJet_all_nGenJet_stack_2->SetBinError(19,33.54344);
   GenJet_all_nGenJet_stack_2->SetBinError(20,21.9547);
   GenJet_all_nGenJet_stack_2->SetBinError(21,18.32756);
   GenJet_all_nGenJet_stack_2->SetEntries(6.292104e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenJet_bckg_17->Modified();
   GenJet_all_nGenJet_bckg_17->cd();
   GenJet_all_nGenJet_bckg_17->SetSelected(GenJet_all_nGenJet_bckg_17);
}
