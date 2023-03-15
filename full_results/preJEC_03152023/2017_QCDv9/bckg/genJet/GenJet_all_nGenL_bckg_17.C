#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_bckg_17()
{
//=========Macro generated from canvas: GenJet_all_nGenL_bckg_17/GenJet_all_nGenL_bckg_17
//=========  (Thu Mar  9 15:52:35 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_bckg_17 = new TCanvas("GenJet_all_nGenL_bckg_17", "GenJet_all_nGenL_bckg_17",0,0,600,600);
   GenJet_all_nGenL_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenL_bckg_17->Range(-4.867058,-9.842641e+10,22.93266,7.217937e+11);
   GenJet_all_nGenL_bckg_17->SetFillColor(0);
   GenJet_all_nGenL_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenL_bckg_17->SetBorderMode(0);
   GenJet_all_nGenL_bckg_17->SetBorderSize(2);
   GenJet_all_nGenL_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenL_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenL_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.397717e+11);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",20,-0.5,19.5);
   st_stack_10->SetMinimum(0);
   st_stack_10->SetMaximum(6.397717e+11);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Event/1.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,4.90579e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(2,5.310079e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(3,2.610003e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(4,9.173918e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(5,2.652328e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(6,6.961455e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(7,1.758058e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(8,4.345584e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(9,1.052545e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(10,2.613515e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(11,6103626);
   GenJet_all_nGenL_stack_1->SetBinContent(12,1247715);
   GenJet_all_nGenL_stack_1->SetBinContent(13,355862.7);
   GenJet_all_nGenL_stack_1->SetBinContent(14,93421.54);
   GenJet_all_nGenL_stack_1->SetBinContent(15,25022.64);
   GenJet_all_nGenL_stack_1->SetBinContent(16,57.6266);
   GenJet_all_nGenL_stack_1->SetBinError(1,8.964879e+07);
   GenJet_all_nGenL_stack_1->SetBinError(2,9.240534e+07);
   GenJet_all_nGenL_stack_1->SetBinError(3,6.430354e+07);
   GenJet_all_nGenL_stack_1->SetBinError(4,3.785518e+07);
   GenJet_all_nGenL_stack_1->SetBinError(5,2.019791e+07);
   GenJet_all_nGenL_stack_1->SetBinError(6,1.028309e+07);
   GenJet_all_nGenL_stack_1->SetBinError(7,5144452);
   GenJet_all_nGenL_stack_1->SetBinError(8,2552613);
   GenJet_all_nGenL_stack_1->SetBinError(9,1254281);
   GenJet_all_nGenL_stack_1->SetBinError(10,622559.3);
   GenJet_all_nGenL_stack_1->SetBinError(11,303621.5);
   GenJet_all_nGenL_stack_1->SetBinError(12,135615.6);
   GenJet_all_nGenL_stack_1->SetBinError(13,72442.86);
   GenJet_all_nGenL_stack_1->SetBinError(14,36783.54);
   GenJet_all_nGenL_stack_1->SetBinError(15,21489.04);
   GenJet_all_nGenL_stack_1->SetBinError(16,35.7205);
   GenJet_all_nGenL_stack_1->SetEntries(3.060973e+08);

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
   GenJet_all_nGenL_stack_2->SetBinContent(1,229424.3);
   GenJet_all_nGenL_stack_2->SetBinContent(2,2602048);
   GenJet_all_nGenL_stack_2->SetBinContent(3,9007519);
   GenJet_all_nGenL_stack_2->SetBinContent(4,1.120553e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(5,7663689);
   GenJet_all_nGenL_stack_2->SetBinContent(6,3605749);
   GenJet_all_nGenL_stack_2->SetBinContent(7,1347984);
   GenJet_all_nGenL_stack_2->SetBinContent(8,434610.4);
   GenJet_all_nGenL_stack_2->SetBinContent(9,126977);
   GenJet_all_nGenL_stack_2->SetBinContent(10,34729.69);
   GenJet_all_nGenL_stack_2->SetBinContent(11,8963.098);
   GenJet_all_nGenL_stack_2->SetBinContent(12,2236.301);
   GenJet_all_nGenL_stack_2->SetBinContent(13,530.5752);
   GenJet_all_nGenL_stack_2->SetBinContent(14,131.7546);
   GenJet_all_nGenL_stack_2->SetBinContent(15,31.87269);
   GenJet_all_nGenL_stack_2->SetBinContent(16,7.482759);
   GenJet_all_nGenL_stack_2->SetBinContent(17,1.80525);
   GenJet_all_nGenL_stack_2->SetBinContent(18,0.2792647);
   GenJet_all_nGenL_stack_2->SetBinContent(19,0.09712435);
   GenJet_all_nGenL_stack_2->SetBinError(1,113.6901);
   GenJet_all_nGenL_stack_2->SetBinError(2,390.6585);
   GenJet_all_nGenL_stack_2->SetBinError(3,745.0848);
   GenJet_all_nGenL_stack_2->SetBinError(4,860.7446);
   GenJet_all_nGenL_stack_2->SetBinError(5,730.9044);
   GenJet_all_nGenL_stack_2->SetBinError(6,508.4147);
   GenJet_all_nGenL_stack_2->SetBinError(7,313.2885);
   GenJet_all_nGenL_stack_2->SetBinError(8,178.7481);
   GenJet_all_nGenL_stack_2->SetBinError(9,96.90845);
   GenJet_all_nGenL_stack_2->SetBinError(10,50.80764);
   GenJet_all_nGenL_stack_2->SetBinError(11,25.84394);
   GenJet_all_nGenL_stack_2->SetBinError(12,12.93363);
   GenJet_all_nGenL_stack_2->SetBinError(13,6.291317);
   GenJet_all_nGenL_stack_2->SetBinError(14,3.153384);
   GenJet_all_nGenL_stack_2->SetBinError(15,1.541069);
   GenJet_all_nGenL_stack_2->SetBinError(16,0.741224);
   GenJet_all_nGenL_stack_2->SetBinError(17,0.3721736);
   GenJet_all_nGenL_stack_2->SetBinError(18,0.1615506);
   GenJet_all_nGenL_stack_2->SetBinError(19,0.06928055);
   GenJet_all_nGenL_stack_2->SetEntries(6.227592e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenL_bckg_17->Modified();
   GenJet_all_nGenL_bckg_17->cd();
   GenJet_all_nGenL_bckg_17->SetSelected(GenJet_all_nGenL_bckg_17);
}
