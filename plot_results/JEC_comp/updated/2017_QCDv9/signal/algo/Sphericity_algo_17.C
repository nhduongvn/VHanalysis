#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2183529,-0.03507461,1.171633,0.2572138);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15709);
   Sphericity_algo_17->SetRightMargin(0.1234783);
   Sphericity_algo_17->SetBottomMargin(0.12);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.227985);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",25,0,1);
   st_stack_154->SetMinimum(0);
   st_stack_154->SetMaximum(0.227985);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetTitle("Sphericity");
   st_stack_154->GetXaxis()->SetRange(1,25);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetTitleOffset(1);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Event/0.04");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetTitleSize(0.037);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetTitleOffset(1);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.01379575);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.08454256);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.1120702);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.1417351);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1139028);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.06212926);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.01656328);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.006224065);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.003871101);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.002010239);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.00194175);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.001985209);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.00491773);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.01238082);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01538082);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01653363);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01508893);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01084749);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.005622505);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.003605481);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.002739209);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.002010239);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.00194175);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.001985209);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(335);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.004675672);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.03119065);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.05171311);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.04749247);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.03173394);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.0148981);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.007702295);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.004980054);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.002851973);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.001548273);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.001117215);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.0004495803);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.0006515287);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.0005166326);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.0007577842);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.0001602772);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.0002638218);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.000263087);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.0002588532);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.0009895562);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.002704553);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.003541609);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003369794);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.002769675);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.001876286);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001372294);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.001099844);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.0008336679);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.0006368256);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.0005105565);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.000279477);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.0003809714);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.0003653716);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0004377482);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.0001602772);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.0002638218);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.000263087);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.0002588532);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
