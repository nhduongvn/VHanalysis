#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_17()
{
//=========Macro generated from canvas: Z_pt_tags_17/Z_pt_tags_17
//=========  (Wed Jan 18 11:40:22 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_17 = new TCanvas("Z_pt_tags_17", "Z_pt_tags_17",0,0,600,600);
   Z_pt_tags_17->SetHighLightColor(2);
   Z_pt_tags_17->Range(37.97653,-0.8010089,1705.96,5.874065);
   Z_pt_tags_17->SetFillColor(0);
   Z_pt_tags_17->SetFillStyle(4000);
   Z_pt_tags_17->SetBorderMode(0);
   Z_pt_tags_17->SetBorderSize(2);
   Z_pt_tags_17->SetLeftMargin(0.15709);
   Z_pt_tags_17->SetRightMargin(0.1234783);
   Z_pt_tags_17->SetBottomMargin(0.12);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.206558);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(0);
   st_stack_10->SetMaximum(5.206558);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,2.090871);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,3.471038);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,2.107927);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,0.9410229);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.4170776);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.2190786);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.121641);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.06289553);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.03923617);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.01415921);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.01565593);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.0001533372);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.002998465);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.002631403);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.06202733);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.07988925);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.06204935);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.04133152);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.02718197);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.01952949);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.01569139);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.01100965);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.00831477);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.005079311);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.005170567);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.0001533372);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.002147215);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.001949608);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(6355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.2865254);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.6914102);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.7848118);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.4752581);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.2058922);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.09705116);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.04572918);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.02229851);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.008787382);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.004042597);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.002491932);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.0005447782);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.00122979);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0001740468);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0002781828);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.008365704);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.01301733);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01387728);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.01078583);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.007059495);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.004874502);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.00334614);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.002313392);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.001463696);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.0009807838);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.000811352);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0003170405);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0005214901);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0001657891);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0002781828);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(12362);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_17->Modified();
   Z_pt_tags_17->cd();
   Z_pt_tags_17->SetSelected(Z_pt_tags_17);
}
