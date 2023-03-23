#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Thu Mar 23 11:25:12 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-1.481554,1.171633,10.86473);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetLeftMargin(0.15709);
   Aplanarity_tags_all->SetRightMargin(0.1234783);
   Aplanarity_tags_all->SetBottomMargin(0.12);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.6301);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(9.6301);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("Aplanarity");
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Event/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,5.720866);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,1.711852);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,0.5068978);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,0.2057478);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,0.1141956);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,0.04587203);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,0.03307334);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,0.01426594);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,0.007723335);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,0.004771585);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,0.003901519);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,0.001117628);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,0.004632235);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,0.0009559662);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,0.0009559662);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,0.1287587);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,0.06817791);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,0.03500115);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,0.02234069);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,0.01636588);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,0.01079114);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,0.008968243);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,0.00599312);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,0.003862188);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,0.003425653);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,0.002899939);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,0.001117628);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,0.003285691);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,0.0009559662);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,0.0009559662);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(3779);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2.272117);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,0.6782996);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,0.2386526);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,0.1037327);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,0.04731881);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,0.02013208);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,0.01127511);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,0.01163912);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,0.005890601);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,0.003499344);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.002622569);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.001537692);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.0009724858);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.0008829417);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,0.0003156401);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.0003753755);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,0.02758347);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,0.01484397);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,0.008717425);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,0.005751156);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,0.003883474);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.0025659);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,0.001873715);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.001870421);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.001430305);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.001031742);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.0008678192);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.0006913621);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.0005671172);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.0005203854);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,0.0003156401);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.0003753755);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(11578);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
