#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-0.1020137,1.171633,0.7481007);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.6630893);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",50,0,1);
   st_stack_158->SetMinimum(0);
   st_stack_158->SetMaximum(0.6630893);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetTitle("Aplanarity");
   st_stack_158->GetXaxis()->SetRange(1,50);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetTitleOffset(1);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Event/0.02");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetTitleSize(0.037);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetTitleOffset(1);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.4141518);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.06112673);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.04505686);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.01634684);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.007027531);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.002314896);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.002039095);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.001753361);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.001245675);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.02826671);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.01092429);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.009608431);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.005532826);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.003520405);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.003161768);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.002039095);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.001753361);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.001245675);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(331);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.1362123);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.04203112);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.0103885);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.005430098);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.001441755);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.001105705);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.0005144311);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.000697929);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.0003108022);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.0002608963);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.0004493349);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.0002638256);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.0003100168);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.005704036);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.003171643);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.001581081);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.001140727);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.0005967405);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.0005554275);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.0003638824);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.0004037027);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.0003108022);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.0002608963);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.0003209749);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0002638256);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0003100168);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(869);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
